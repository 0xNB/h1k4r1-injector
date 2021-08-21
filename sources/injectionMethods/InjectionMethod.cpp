#include "InjectionMethods/InjectionMethod.h"

InjectionMethod::InjectionMethod(PROCESSENTRY32 processEntry, LPCVOID buffer) {
	this->buffer = buffer;
	this->processEntry = processEntry;
}

