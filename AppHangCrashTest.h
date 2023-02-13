
// AppHangCrashTest.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols
#include <windows.h>
#include <iostream>
#include <tlhelp32.h>
using namespace std;

typedef LONG(NTAPI* NtSuspendProcess)(IN HANDLE ProcessHandle);

// CAppHangCrashTestApp:
// See AppHangCrashTest.cpp for the implementation of this class
//

class CAppHangCrashTestApp : public CWinApp
{
public:
	CAppHangCrashTestApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CAppHangCrashTestApp theApp;
