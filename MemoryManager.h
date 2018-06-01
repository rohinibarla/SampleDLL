#pragma once  
#ifdef YOUR_EXPORTS  
#define YOUR_API __declspec(dllexport)   
#else  
#define YOUR_API __declspec(dllimport)   
#endif  

extern "C" __declspec(dllexport)
int __stdcall Age();

extern "C" __declspec(dllexport)
char * __stdcall Name(int number);
