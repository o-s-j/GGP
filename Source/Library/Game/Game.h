#pragma once

#include "Common.h"
HRESULT InitWindow(_In_ HINSTANCE hInstance, _In_ INT nCmdShow);
HRESULT InitDevice();
void CleanupDevice();
void Render();
LRESULT CALLBACK WindowProc(
    _In_ HWND hWnd,
    _In_ UINT uMsg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam
);
HRESULT CompileShaderFromFile(
    _In_ PCWSTR pszFileName, // FileName
    _In_ PCSTR pszEntryPoint, // EntryPoint
    _In_ PCSTR pszShaderModel, // Shader target
    _Outptr_ ID3DBlob** ppBlobOut // ID3DBlob out
);

struct SimpleVertex
{
    XMFLOAT3 Pos;
};

namespace library
{
    /*--------------------------------------------------------------------
      Forward declarations
    --------------------------------------------------------------------*/

    /*F+F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F
      Function: Render

      Summary:  Render the frame
    F---F---F---F---F---F---F---F---F---F---F---F---F---F---F---F---F-F*/
    void PrintHi();
}
