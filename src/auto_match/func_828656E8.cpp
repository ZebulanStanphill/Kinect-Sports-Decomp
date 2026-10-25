// std::wstring::replace(size_type, size_type, const std::wstring &, size_type,
// size_type) from Visual C++ 2010's <xstring>.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. std::wstring::_Grow(size_type, bool) (fn_822977A8) stays a call by the
// name that C units use.

// <xstring> calls these directly, so their names are replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <string>
#undef _Xlength_error
#undef _Xout_of_range

extern "C" {
bool fn_822977A8(std::wstring *self, unsigned int newsize, bool trim);
}

template <> __forceinline bool std::wstring::_Grow(std::wstring::size_type newsize, bool trim)
{
    return fn_822977A8(this, newsize, trim);
}

template std::wstring &std::wstring::replace(std::wstring::size_type off, std::wstring::size_type n0, const std::wstring &right, std::wstring::size_type roff, std::wstring::size_type count);
