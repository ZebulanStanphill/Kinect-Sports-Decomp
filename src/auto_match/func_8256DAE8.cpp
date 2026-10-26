// _Grow(size_type, bool) of a basic_string<char> whose allocator is the heap
// allocator in game/Allocator_827D8E60.h, from Visual C++ 2010's <xstring>. It
// compiles like std::string::_Grow (func_822304F8) apart from its callees.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 lets it inline as much. _Tidy(bool,
// size_type) (fn_8256D798) stays a call by the name that C units use.
// _Copy(size_type, size_type) is defined in its own unit (func_8256DC00).

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
#include "game/Allocator_827D8E60.h"

typedef std::basic_string<char, std::char_traits<char>, Allocator_827D8E60<char> > HeapString;

extern "C" void fn_8256D798(HeapString *self, bool built, unsigned int newsize);

template <> __forceinline void HeapString::_Tidy(bool built, HeapString::size_type newsize)
{
    fn_8256D798(this, built, newsize);
}

template <> void HeapString::_Copy(HeapString::size_type newsize, HeapString::size_type oldlen);

template bool HeapString::_Grow(HeapString::size_type newsize, bool trim);
