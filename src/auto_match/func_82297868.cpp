// std::wstring::assign(const wchar_t *, size_type) from Visual C++ 2010's
// <xstring>, kept under its fn_ name because Matching units (func_822950D8.cpp,
// func_82297428.c, func_828BB7B8.c) call it. The aliasing case calls
// assign(const wstring &, pos, count) (fn_822975D8) and _Grow (fn_822977A8)
// stays out of line; _Inside is called by its mangled name.

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
std::wstring *fn_822975D8(std::wstring *self, const std::wstring &right, unsigned int off, unsigned int n);
bool fn_822977A8(std::wstring *self, unsigned int newsize, bool trim);
}

// Out of line in the original (mangled call).
template <> bool std::wstring::_Inside(const wchar_t *ptr);

template <> __forceinline bool std::wstring::_Grow(std::wstring::size_type newsize, bool trim)
{
    return fn_822977A8(this, newsize, trim);
}

extern "C" std::wstring *fn_82297868(std::wstring *self, const wchar_t *ptr, unsigned int count)
{
    if (self->_Inside(ptr))
        return fn_822975D8(self, *self, ptr - self->_Myptr(), count);
    if (self->_Grow(count)) {
        std::wstring::traits_type::copy(self->_Myptr(), ptr, count);
        self->_Eos(count);
    }
    return self;
}
