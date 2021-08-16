#pragma once

#ifndef _INCL_PROCSEARCH
#define _INCL_PROCSEARCH
#endif

#include <vector>
#include <windows.h>
#include <tlhelp32.h>
#include <handleapi.h>
#include <tchar.h>
#include <string>

#include <locale>
#include <codecvt>
#include <string>

#include <iostream>

#include <stdexcept>

using namespace std;

class ProcessSearcher
{
public:
	ProcessSearcher();
	vector<PROCESSENTRY32> searchProcessByName(string name);

	~ProcessSearcher();
};
