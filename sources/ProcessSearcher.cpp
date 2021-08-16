#include "ProcessSearcher.h"

ProcessSearcher::ProcessSearcher(){

}

ProcessSearcher::~ProcessSearcher() {

}
vector<PROCESSENTRY32> ProcessSearcher::searchProcessByName(string name) {

    PROCESSENTRY32 entry;
    HANDLE hProcessSnap;

    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
    std::wstring wName = converter.from_bytes(name);


    hProcessSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);

    if (hProcessSnap == INVALID_HANDLE_VALUE)
    {
        throw std::runtime_error("Could not take process snapshot");
    }

    entry.dwSize = sizeof(PROCESSENTRY32);

    if (Process32First(hProcessSnap, &entry) == TRUE)
    {
        while (Process32Next(hProcessSnap, &entry) == TRUE)
        {
            if (wcsstr(entry.szExeFile, wName.c_str()) != 0)
            {
                std::cout << "matches " << entry.th32ProcessID << std::endl;
            }
        }
    }

    CloseHandle(hProcessSnap);
    return vector<PROCESSENTRY32>();

}