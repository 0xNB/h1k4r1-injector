#pragma once
#include "InjectionMethods/ThreadCreationStrategy/GenericThreadingStrategy.h"
#include <vector>
#include <windows.h>
#include <tlhelp32.h>
#include <handleapi.h>
#include <stdio.h>
#include <tchar.h>
#include <string>

#include <locale>
#include <codecvt>
#include <string>
#include <iostream>
#include <stdexcept>
#include <cwctype>
#include <algorithm>

class InjectionMethod {

public:
	InjectionMethod(PROCESSENTRY32 processEntry, LPCVOID buffer);
	void setThreadCreationStrategy(GenericThreadingStrategy genericThreadingStrategy);
	void inject();
	void onSuccess();

private:
	PROCESSENTRY32 processEntry;
	LPCVOID buffer;
	GenericThreadingStrategy threadingStrategy;

};
