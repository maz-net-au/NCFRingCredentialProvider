// CredUILauncher.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <WinCred.h>

int _tmain(int argc, _TCHAR* argv[])
{
	BOOL save = false;
	DWORD authPackage = 0;
	LPVOID authBuffer;
	ULONG authBufferSize = 0;
	CREDUI_INFO credUiInfo;

	credUiInfo.pszCaptionText = TEXT("Demo Cred UI Prompt");
	credUiInfo.pszMessageText = TEXT("Swipe your NFC Tag");
	credUiInfo.cbSize = sizeof(credUiInfo);
	credUiInfo.hbmBanner = NULL;
	credUiInfo.hwndParent = NULL;
	
	CredUIPromptForWindowsCredentials(&credUiInfo, 0, &authPackage, NULL, 0, &authBuffer, &authBufferSize, &save, 0);

	return 0;
}

