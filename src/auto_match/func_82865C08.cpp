// std::wstring's constructor from an iterator range (Visual C++ 2010's <xstring>),
// for a std::string's iterators: reserves the length, then appends each char
// widened. Used by _Replace (func_82865CC8.cpp) when a wstring is assigned from a
// narrow string's begin() and end(). _Tidy, reserve and append(count, ch) are the
// original's out-of-line members, under the names C units use.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <string>
#undef _Xlength_error
#undef _Xout_of_range

// The source range; whether the original used iterator or const_iterator is not
// known (the code is the same).
typedef std::string::const_iterator NarrowIt;

extern "C" {
void fn_82297DB0(std::wstring *self, bool built, unsigned int newsize);
void fn_82865B90(std::wstring *self, unsigned int count);
std::wstring *fn_82865AF0(std::wstring *self, unsigned int count, wchar_t ch);
}

template <> __forceinline void std::wstring::_Tidy(bool built, std::wstring::size_type newsize)
{
    fn_82297DB0(this, built, newsize);
}
template <> __forceinline void std::wstring::reserve(std::wstring::size_type count)
{
    fn_82865B90(this, count);
}
template <> __forceinline std::wstring &std::wstring::append(std::wstring::size_type count, wchar_t ch)
{
    return *fn_82865AF0(this, count, ch);
}

template std::basic_string<wchar_t>::basic_string(NarrowIt first, NarrowIt last);
