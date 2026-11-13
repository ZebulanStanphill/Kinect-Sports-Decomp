// std::wstring::append(const wchar_t *) from Visual C++ 2010's <xstring>, with
// append(const wchar_t *, size_type) inlined. wcslen (fn_82F64CE0) and
// _Grow (fn_822977A8) keep the fn_ names that C units use; _Inside and
// append(const wstring &, size_type, size_type) are called by their mangled names.

// <xstring> calls these directly, so their names are replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
extern "C" unsigned int fn_82F64CE0(const wchar_t *str);
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#define wcslen fn_82F64CE0
#include <string>
#undef _Xlength_error
#undef _Xout_of_range
#undef wcslen

extern "C" {
bool fn_822977A8(std::wstring *self, unsigned int newsize, bool trim);
}

template <> __forceinline bool std::wstring::_Grow(std::wstring::size_type newsize, bool trim)
{
    return fn_822977A8(this, newsize, trim);
}

// Out of line in the original (mangled calls).
template <> bool std::wstring::_Inside(const wchar_t *ptr);
template <> std::wstring &std::wstring::append(const std::wstring &right, std::wstring::size_type roff,
                                               std::wstring::size_type count);

extern "C" std::wstring *fn_822AC2D0(std::wstring *self, const wchar_t *ptr)
{
    return &self->append(ptr);
}
