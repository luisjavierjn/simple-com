// SimpleChatServer.cpp : Implementation of CSimpleChatServer

#include "stdafx.h"
#include "SimpleChatServer.h"
#include <atlstr.h>
#define MAX_LENGTH 300

// CSimpleChatServer


STDMETHODIMP CSimpleChatServer::CallMe(BSTR clientName, BSTR** helloMessage)
{
	// TODO: Add your implementation code here
	CString temp = _T("Hi ");
	temp += clientName;
	temp += _T(", welcome to the simple chat server!");
	BSTR str = temp.AllocSysString();
	*helloMessage = &str;
	return S_OK;
}
