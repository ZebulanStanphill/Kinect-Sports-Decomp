// append(const basic_string &, size_type, size_type) of a basic_string<char>
// whose allocator is the heap allocator in game/Allocator_827D8E60.h, from
// Visual C++ 2010's <xstring>.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 lets it inline as much.
// _Grow(size_type, bool) is defined in its own unit (func_8256DAE8).

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

template <> bool HeapString::_Grow(HeapString::size_type newsize, bool trim);

template HeapString &HeapString::append(const HeapString &right, HeapString::size_type roff,
                                        HeapString::size_type count);
