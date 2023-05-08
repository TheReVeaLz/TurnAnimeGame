#pragma once
#include <string>

struct HookData {
    std::string name;
    DWORD rva;

    void* hook;
    void* original;
};

typedef __int64(__fastcall* BLINDENEMIES)(__int64 a1, __int64 a2);
BLINDENEMIES o_blindenemies = nullptr;

typedef __int64(__fastcall* UIDChanger)(__int64 a1, __int32 a2);
UIDChanger o_UIDChanger = nullptr;

typedef __int64(__fastcall* LEAVECURRENTPHASE)(__int64 a1, __int64 a2);
LEAVECURRENTPHASE o_leavecurrentphase = nullptr;

typedef __int64(__fastcall* SETCURRENTPHASE)(__int64 a1, int a2, __int64 a3, char a4);
SETCURRENTPHASE o_setcurrentphase = nullptr;

typedef __int64(__fastcall* ISAUTOBATTLE)(__int64 a1);
ISAUTOBATTLE o_isautobattle = nullptr;

typedef char(__fastcall* SETAUTOBATTLEFLAG)(__int64 a1, unsigned __int8 a2);
SETAUTOBATTLEFLAG o_setautobattleflag = nullptr;

typedef __int64(__fastcall* LOCKPLAYERCONTROL)();
LOCKPLAYERCONTROL o_lockplayercontrol = nullptr;

typedef __int64(__fastcall* UNLOCKPLAYERCONTROL)();
UNLOCKPLAYERCONTROL o_unlockplayercontrol = nullptr;

char(__fastcall* o_get_isindialog)(__int64 a1) = nullptr;

typedef HANDLE(WINAPI* CREATE_FILE_W)(LPCWSTR, DWORD, DWORD, LPSECURITY_ATTRIBUTES, DWORD, DWORD, HANDLE);
CREATE_FILE_W p_CreateFileW = nullptr;
CREATE_FILE_W t_CreateFileW;