#include <Windows.h>
#include "vars.hpp"

/*
Credits: https://github.com/rdbo/ImGui-DirectX-11-Kiero-Hook
This was made by xo1337, i've used the rdbo ImGui DX11 Hook as a base,
but in this repo, made everything more clean and beginner friendly.
*/


Vars* vars = new Vars();

extern DWORD D3DThread();
BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hMod);
		CloseHandle(CreateThread(0, 0, (PTHREAD_START_ROUTINE)D3DThread, 0, 0, 0));
	}
	return TRUE;
}
