// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently

#pragma once
#pragma unmanaged
#include "targetver.h"

#define WIN32_LEAN_AND_MEAN
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <tlhelp32.h>
#pragma comment(lib,"ntdll.lib")
namespace NTDLL
{
	#include "ntapi.h"
}
#include "syscalls.h"
#pragma managed
#include "JackSharper.h"