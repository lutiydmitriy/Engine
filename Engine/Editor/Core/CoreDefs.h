#pragma once

#include <Windows.h>

#define ERROR_HANDLE(result, s) \
	if(result) \
	{ \
		OutputDebugString(s); \
		return false; \
	} \

