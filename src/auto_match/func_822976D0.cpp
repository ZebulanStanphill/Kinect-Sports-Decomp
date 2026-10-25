// std::wstring::_Copy(size_type, size_type) from Visual C++ 2010's <xstring>.
// Other units call this function by its fn_ name, so it is a wrapper around the
// member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. std::_Allocate (fn_82297930) and std::wstring::_Tidy(bool, size_type)
// (fn_82297DB0) stay calls by the names that C units use.

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
wchar_t *fn_82297930(unsigned int count, wchar_t *);
void fn_82297DB0(std::wstring *self, bool built, unsigned int newsize);
}


template <> __forceinline wchar_t *std::_Allocate(size_t count, wchar_t *)
{
    return fn_82297930(count, (wchar_t *)0);
}

template <> __forceinline void std::wstring::_Tidy(bool built, std::wstring::size_type newsize)
{
    fn_82297DB0(this, built, newsize);
}

extern "C" void fn_822976D0(std::wstring *self, unsigned int newsize, unsigned int oldlen)
{
    self->_Copy(newsize, oldlen);
}
