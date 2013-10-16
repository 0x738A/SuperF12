///////////////////////////////////////////////////////////////////////////////
// FileName:    HookContext.h
// Created:     2013/07/17
// Author:      titilima
// CopyRight:   Titi Studio (?) 2001-2013
//-----------------------------------------------------------------------------
// Information: �ҹ�������
///////////////////////////////////////////////////////////////////////////////

#ifndef HOOKCONTEXT_H
#define HOOKCONTEXT_H

#pragma once

class CDevToolsHost;

class CHookContext
{
public:
    CHookContext(DWORD dwThreadID);
private:
    static LRESULT CALLBACK CallWndProc(int code, WPARAM wParam, LPARAM lParam);
    CDevToolsHost* GetDevToolsHost(HWND hTridentWindow);
    bool RemoveHost(HWND hWindow);
private:
    HHOOK m_hHook;
    map<HWND, CDevToolsHost *> m_map;
    // ��ʾ�����߹��ߵ� Trident �����ղ��� WM_DESTROY,
    // ֻ�ý���һ��������ӳ��, �ɸ����ڴ���.
    map<HWND, HWND> m_parentMap;
};

#endif // HOOKCONTEXT_H
