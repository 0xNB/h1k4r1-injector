#include "ProcessSearcher.h"
using namespace std;
ProcessSearcher::ProcessSearcher(){

}

ProcessSearcher::~ProcessSearcher() {

}
vector<PROCESSENTRY32> ProcessSearcher::searchProcessByName(string name) {

    PROCESSENTRY32 entry;
    HANDLE hProcessSnap;
    vector<PROCESSENTRY32> result;

    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
    std::wstring wName = converter.from_bytes(name);
    transform(wName.begin(), wName.end(), wName.begin(), std::towlower);


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
            wstring wstringExeName = std::wstring(entry.szExeFile);
            transform(wstringExeName.begin(), wstringExeName.end(), wstringExeName.begin(), std::towlower);
            if (wcsstr(wstringExeName.c_str(), wName.c_str()) != 0)
            {
                result.push_back(entry);
                std::cout << "matches " << entry.th32ProcessID << std::endl;
            }
        }
    }

    return result;

}

vector<PROCESSENTRY32> ProcessSearcher::searchByProcessId(string processId) {

    PROCESSENTRY32 entry;
    HANDLE hProcessSnap;
    vector<PROCESSENTRY32> result;

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
            string processIdString = std::to_string(entry.th32ProcessID);
            if (processIdString.find(processId) != std::string::npos)
            {
                result.push_back(entry);
                std::cout << "matches " << entry.th32ProcessID << std::endl;
            }
        }
    }

    return result;

}