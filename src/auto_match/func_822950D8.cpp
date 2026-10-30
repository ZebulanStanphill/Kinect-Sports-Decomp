// std::basic_stringbuf<wchar_t>::str() const. The out-of-line wstring members the original calls keep their
// fn_ names (used by Matching C units): forwarding specialisations, no library body is copied.
#include <sstream>
extern "C" {
void fn_82297DB0(std::wstring *self, bool built, unsigned int newsize);
std::wstring *fn_82297868(std::wstring *self, const wchar_t *s, unsigned int n);
void fn_822959F8(std::wstring *dst, std::wstring *src);
}
template <> __forceinline void std::wstring::_Tidy(bool built, std::wstring::size_type newsize)
{
    fn_82297DB0(this, built, newsize);
}
template <> __forceinline std::wstring &std::wstring::assign(const wchar_t *s, std::wstring::size_type n)
{
    return *fn_82297868(this, s, n);
}
template <> __forceinline std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >::basic_string(std::wstring &&rv)
{
    fn_822959F8(this, &rv);
}
template std::wstring std::wstringbuf::str() const;
