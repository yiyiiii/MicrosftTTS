
// MicrosftTTS.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMicrosftTTSApp: 
// �йش����ʵ�֣������ MicrosftTTS.cpp
//

class CMicrosftTTSApp : public CWinApp
{
public:
	CMicrosftTTSApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMicrosftTTSApp theApp;