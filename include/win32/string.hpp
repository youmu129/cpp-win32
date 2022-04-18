#ifndef WIN32_STRING_HPP
#define WIN32_STRING_HPP

#include "win32/memory.hpp"

namespace win32
{
    template <typename CharType>
    class StringTraitsWin32
    {

    };

    template <typename CharType, typename StringTraits = StringTraitsWin32<CharType>>
    class StringView
    {

    };

    template <typename CharType, typename StringTraits = StringTraitsWin32<CharType>, typename Allocator = Heap<false>>
    class String : public StringView<CharType, StringTraits>
    {
    };

    using UnicodeStringView = StringView<wchar_t>;
    using UnicodeString = String<wchar_t>;
}

#endif // WIN32_STRING_HPP
