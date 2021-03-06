// WARNING: Please don't edit this file. It was generated by C++/Win32 v0.0.0.1

#ifndef WIN32_Windows_Win32_DirectWrite_H
#define WIN32_Windows_Win32_DirectWrite_H
#include "win32/base.h"
static_assert(win32::check_version(CPPWIN32_VERSION, "0.0.0.1"), "Mismatched C++/Win32 headers.");
#define CPPWIN32_VERSION "0.0.0.1"
#include "win32/impl/Windows.Win32.DirectWrite.2.h"
WIN32_EXPORT namespace win32::Windows::Win32::DirectWrite
{
#pragma region methods
    inline int32_t DWriteCreateFactory(Windows::Win32::DirectWrite::DWRITE_FACTORY_TYPE factoryType, ::win32::guid* iid, Windows::Win32::Com::IUnknown** factory)
    {
        auto win32_impl_result = WIN32_IMPL_DWriteCreateFactory(factoryType, iid, factory);
        return win32_impl_result;
    }

#pragma endregion methods

}
#endif
