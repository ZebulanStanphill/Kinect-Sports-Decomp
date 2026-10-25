// std::string::reserve(size_type) from Visual C++ 2010's <xstring>. Other units
// call this function by its fn_ name, so it is a wrapper around the member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much.
//
// std::string::_Grow(size_type, bool) is defined in its own unit
// (func_822304F8).

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

template <> bool std::string::_Grow(std::string::size_type newsize, bool trim);

extern "C" void fn_822B2888(std::string *self, unsigned int newcap)
{
    self->reserve(newcap);
}
