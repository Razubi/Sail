#pragma once

#ifdef SL_PLATFORM_WINDOWS
	#ifdef SL_BUILD_DLL
		#define SAIL_API _declspec(dllexport)
	#else
		#define SAIL_API _declspec(dllimport)
	#endif
#else
	#error Sail is only made for windows.
#endif // DEBUG
