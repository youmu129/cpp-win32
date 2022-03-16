#pragma once

#ifndef WIN32_SHELL_H_
#define WIN32_SHELL_H_

#include "Base.h"

#include <Shlwapi.h>
#include <ShlObj.h>

#include <string>

#pragma comment(lib, "shlwapi.lib")

namespace win32
{

namespace Shell
{

    inline std::wstring GetAppDataPath() noexcept 
    {
        WCHAR path[MAX_PATH];
        if (SUCCEEDED(::SHGetFolderPathW(NULL, CSIDL_APPDATA, NULL, 0, path))) 
        {
			return std::wstring(path);
        }

		return std::wstring();
    }

} // namespace Shell

} // namespace win32

#endif // WIN32_SHELL_H_