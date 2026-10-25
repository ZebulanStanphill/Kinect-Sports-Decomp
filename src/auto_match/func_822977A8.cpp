// std::wstring::_Grow(size_type, bool) from Visual C++ 2010's <xstring>. C
// units call this function, so it keeps its fn_ name as a wrapper around the
// member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. std::wstring::_Copy(size_type, size_type) (fn_822976D0) and
// std::wstring::_Tidy(bool, size_type) (fn_82297DB0) stay calls by the names
// that C units use.

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
void fn_822976D0(std::wstring *self, unsigned int newsize, unsigned int oldlen);
void fn_82297DB0(std::wstring *self, bool built, unsigned int newsize);
}

template <> __forceinline void std::wstring::_Copy(std::wstring::size_type newsize, std::wstring::size_type oldlen)
{
    fn_822976D0(this, newsize, oldlen);
}

template <> __forceinline void std::wstring::_Tidy(bool built, std::wstring::size_type newsize)
{
    fn_82297DB0(this, built, newsize);
}

extern "C" bool fn_822977A8(std::wstring *self, unsigned int newsize, bool trim)
{
    return self->_Grow(newsize, trim);
}
