#pragma once

#ifndef WIN32_STRING_H_
#define WIN32_STRING_H_

#include "Base.h"

#include <string>

namespace win32
{

namespace String
{

namespace Convert
{

    inline std::string UnicodeToAnsi(const wchar_t* unicodeString, int unicodeLength = -1) noexcept 
	{
		if (unicodeString == nullptr)
		{
			return std::string();
		}

		std::string ansiString;
		int ansiLength = ::WideCharToMultiByte(CP_ACP, 0, unicodeString, unicodeLength, nullptr, 0, 0, nullptr);
		if (ansiLength != 0)
		{
			ansiString.resize(ansiLength);
			ansiLength = ::WideCharToMultiByte(CP_ACP, 0, unicodeString, unicodeLength, &ansiString[0], ansiLength, 0, nullptr);
			if (ansiLength != 0)
			{
				ansiString.resize(ansiLength - 1);
				return std::move(ansiString);
			}
		}

		return std::string();
	}

	inline std::string UnicodeToAnsi(const std::wstring& unicodeString) noexcept 
	{
		return UnicodeToAnsi(unicodeString.c_str(), unicodeString.length());
	}

	inline std::wstring AnsiToUnicode(const char* ansiString, int ansiLength = -1) noexcept
	{
		if (ansiString == nullptr)
		{
			return std::wstring();
		}

		std::wstring unicodeString;
		int unicodeLength = ::MultiByteToWideChar(CP_ACP, 0, ansiString, ansiLength, nullptr, 0);
		if (unicodeLength != 0)
		{
			unicodeString.resize(unicodeLength);
			unicodeLength = ::MultiByteToWideChar(CP_ACP, 0, ansiString, ansiLength, &unicodeString[0], unicodeLength);
			if (unicodeLength != 0)
			{
				unicodeString.resize(unicodeLength - 1);
				return std::move(unicodeString);
			}
		}

		return std::wstring();
	}

	inline std::wstring AnsiToUnicode(const std::string& ansiString) noexcept
	{
		return AnsiToUnicode(ansiString.c_str(), ansiString.length());
	}

} // namespace Convert

} // namespace Shell

} // namespace win32

#endif // WIN32_STRING_H_