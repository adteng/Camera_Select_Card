
// Camera_Select_Card.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CCamera_Select_CardApp:
// �йش����ʵ�֣������ Camera_Select_Card.cpp
//

class CCamera_Select_CardApp : public CWinApp
{
public:
	CCamera_Select_CardApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CCamera_Select_CardApp theApp;