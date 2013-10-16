///////////////////////////////////////////////////////////////////////////////
// FileName:    Utility.h
// Created:     2013/07/14
// Author:      titilima
// CopyRight:   Titi Studio (?) 2001-2013
//-----------------------------------------------------------------------------
// Information: �����ࡢ����
///////////////////////////////////////////////////////////////////////////////

#ifndef UTILITY_H
#define UTILITY_H

#pragma once

BOOL WINAPI EnableDlgItem(HWND hDlg, UINT id, BOOL bEnable = TRUE);

BOOL WINAPI GetRectInParent(HWND hChild, LPRECT rc);

void WINAPI HighlightWindow(HWND hWnd);

void WINAPI SetWindowIcon(HWND hWnd, HMODULE hMod, UINT idIcon);

#endif // UTILITY_H
