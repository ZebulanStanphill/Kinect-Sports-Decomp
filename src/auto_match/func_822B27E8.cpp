// std::operator+(const std::string &, const char *) from Visual C++ 2010's <xstring>,
// with the members it calls forwarded to their own units' fn_ names.

namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <string>
#undef _Xlength_error
#undef _Xout_of_range

extern "C" void fn_82230300(std::string *self, bool built, unsigned int newsize);
extern "C" void fn_822B2888(std::string *self, unsigned int newcap);
extern "C" std::string *fn_8223DEF8(std::string *self, const std::string *right, unsigned int off, unsigned int count);
extern "C" std::string *fn_8223DFF0(std::string *self, const char *ptr, unsigned int count);

template <> __forceinline void std::string::_Tidy(bool built, std::string::size_type newsize)
{
    fn_82230300(this, built, newsize);
}
template <> __forceinline void std::string::reserve(std::string::size_type newcap)
{
    fn_822B2888(this, newcap);
}
template <> __forceinline std::string &std::string::append(const std::string &right, std::string::size_type off, std::string::size_type count)
{
    return *fn_8223DEF8(this, &right, off, count);
}
template <> __forceinline std::string &std::string::append(const char *ptr, std::string::size_type count)
{
    return *fn_8223DFF0(this, ptr, count);
}

extern "C" std::string fn_822B27E8(const std::string &left, const char *right)
{
    return left + right;
}
