// MemoryManager.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "stdio.h"

#include "Explore2.h"

extern "C" __declspec(dllexport)
int __stdcall Age()
{
	return 20;
}

extern "C" __declspec(dllexport)
char * __stdcall Name(int number)
{
	printf("number: %d\n", number);
	return "Explorer-2";
}
