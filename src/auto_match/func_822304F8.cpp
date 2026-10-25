// std::string::_Grow(size_type, bool) from Visual C++ 2010's <xstring>.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. std::string::_Tidy(bool, size_type) (fn_82230300) and
// std::string::_Copy(size_type, size_type) (fn_822305B0) stay calls by the
// names that C units use.

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
void fn_82230300(std::string *self, bool built, unsigned int newsize);
void fn_822305B0(std::string *self, unsigned int newsize, unsigned int oldlen);
}

template <> __forceinline void std::string::_Tidy(bool built, std::string::size_type newsize)
{
    fn_82230300(this, built, newsize);
}

template <> __forceinline void std::string::_Copy(std::string::size_type newsize, std::string::size_type oldlen)
{
    fn_822305B0(this, newsize, oldlen);
}

template bool std::string::_Grow(std::string::size_type newsize, bool trim);
