#include "stdafx.h"
#include <windows.h>

int APIENTRY _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow)
{
	/* find desktop handle */
	HWND desktopHandle = GetDesktopWindow();
	/* if not found, return 1st error value */
	if (desktopHandle == 0) return 1;
	/* find search pane as desktop child */
	HWND searchPane = FindWindowExW(desktopHandle, NULL, L"SearchPane", NULL);
	/* if not found, return 2nd error value */
	if (searchPane == 0) return 2;
	/* hide search window */
	ShowWindow(searchPane, SW_HIDE);
	/* profit B) */
	return 0;
}