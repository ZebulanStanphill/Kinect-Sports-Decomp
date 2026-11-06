// std::wstring::assign(const wstring &, size_type, size_type) from Visual C++
// 2010's <xstring>. It calls erase (fn_822974F0) and _Grow (fn_822977A8) out of
// line; those keep their fn_ names as extern "C" functions.

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
void *fn_8265C9E0(unsigned int size);
void fn_8265CA20(void *ptr);
std::wstring *fn_822974F0(std::wstring *self, unsigned int off, unsigned int count);
bool fn_822977A8(std::wstring *self, unsigned int newsize, bool trim);
}

template <> __forceinline wchar_t *std::_Allocate(size_t count, wchar_t *)
{
    void *ptr = 0;
    if (count <= 0)
        count = 0;
    else if ((size_t)-1 / sizeof(wchar_t) < count || (ptr = fn_8265C9E0(count * sizeof(wchar_t))) == 0)
        stdext::bad_alloc(0)._Raise();
    return (wchar_t *)ptr;
}

template <> void std::allocator<wchar_t>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline std::wstring &std::wstring::erase(std::wstring::size_type off, std::wstring::size_type count)
{
    return *fn_822974F0(this, off, count);
}

template <> __forceinline bool std::wstring::_Grow(std::wstring::size_type newsize, bool trim)
{
    return fn_822977A8(this, newsize, trim);
}

extern "C" std::wstring *fn_822975D8(std::wstring *self, const std::wstring &right, unsigned int off, unsigned int n)
{
    self->assign(right, off, n);
    return self;
}
