// std::list<T>::_Splice_same from Visual C++ 2010's <list>. It moves the nodes
// [first, last) of one list before where in this one. Element_827DE0B0 is a
// placeholder for the game's 32-byte element type. This code doesn't depend on
// the list's allocator, so std::allocator stands in for it.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. std::_Xlength_error keeps the name that C units use.

// <list> calls std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <list>
#undef _Xlength_error

struct Element_827DE0B0 {
    int data[8];
};

typedef std::list<Element_827DE0B0> List;

template void List::_Splice_same(const_iterator, List &, const_iterator, const_iterator, size_type);
