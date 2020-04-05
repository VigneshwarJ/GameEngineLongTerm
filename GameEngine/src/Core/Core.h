#pragma once

#ifdef GE_PLATFORM_WINDOWS
	#ifdef GE_BUILD_DLL
		#define GL_API _declspec(dllexport)
	#else
		#define GL_API _declspec(dllimport)
	#endif // GE_BUILD_DLL

#endif // GE_PLATFORM_WIN
