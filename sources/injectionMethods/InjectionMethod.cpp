#include "InjectionMethods/InjectionMethod.h"

InjectionMethod::InjectionMethod(PROCESSENTRY32 processEntry, LPCVOID buffer) {
	this->buffer = buffer;
	this->processEntry = processEntry;
}

void InjectionMethod::setThreadCreationStrategy(GenericThreadingStrategy genericThreadingStrategy)
{
	this->threadingStrategy = genericThreadingStrategy;
}

void InjectionMethod::onSuccess() {
	OutputDebugStringA("Everything worked as expected!");
}

void InjectionMethod::inject() {
	DWORD dwProcessId = processEntry.th32ProcessID;
	HANDLE hProcessHandle = OpenProcess(PROCESS_ALL_ACCESS, false, dwProcessId);
	HMODULE hmKernelHandle = GetModuleHandle(L"kernel32.dll");

	OutputDebugStringA("[INFO] Injecting with dll path\n");
	OutputDebugStringA((const char*)this->buffer);
	OutputDebugStringA("\n");

	char* buffer = (char*)this->buffer;

	// Get handle of process and try to find the base address of kernel32.dll
	if (hProcessHandle == NULL || hmKernelHandle == NULL) {
		throw new std::runtime_error("Could not open process or find module!");
	}
	LPVOID lpLoadAddress = (LPVOID)GetProcAddress(hmKernelHandle, "LoadLibraryA");
	if (lpLoadAddress == NULL) {
		throw new std::runtime_error("Could not get handle to LoadLibraryA in kernel");
	}

	// Allocate new memory region inside the address space
	LPVOID lpArgumentAddress = VirtualAllocEx(hProcessHandle, NULL, strlen(buffer), MEM_RESERVE | MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	if (lpArgumentAddress == NULL) {
		throw new std::runtime_error("Cold not allocate space for argument");
	}

	if (!WriteProcessMemory(hProcessHandle, lpArgumentAddress, buffer, strlen(buffer), NULL)) {
		throw new std::runtime_error("Something went wrong while writing process args");
	}

	// Create our thread that runs LoadLibrary inside the other process with the arguemtn we copied ealier
	HANDLE hThreadHandle = CreateRemoteThread(hProcessHandle, NULL, 0, (LPTHREAD_START_ROUTINE)lpLoadAddress, lpArgumentAddress, 0, NULL);
	if (hThreadHandle == NULL) {
		throw new std::runtime_error("Something went wrong while loading dll in handle");
	}
	else {
		printf("Injection worked child thread was created with library loading");
		onSuccess();
	}

	CloseHandle(hProcessHandle);
	return;
}