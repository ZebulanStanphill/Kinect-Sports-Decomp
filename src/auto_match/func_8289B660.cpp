// std::list<T>::_Insert(const_iterator, const T &) from Visual C++ 2010's
// <list>. Element_8289B660 is a placeholder for the game's 24-byte element
// type, whose copy constructor is fn_82F565A0. The container allocates through
// the object fn_825089A0 returns (see game/Allocator_825089A0.h), passing it 1.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. std::_Xlength_error keeps the name that C units use.

// The headers call std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <list>
#undef _Xlength_error
#include "game/Allocator_825089A0.h"

struct Element_8289B660;

extern "C" void fn_82F565A0(Element_8289B660 *self, const Element_8289B660 *other);

struct Element_8289B660 {
    Element_8289B660(const Element_8289B660 &other) { fn_82F565A0(this, &other); }
    int data[6];
};

typedef std::list<Element_8289B660, Allocator_825089A0<Element_8289B660, 1> > List;

template void List::_Insert(const_iterator, const Element_8289B660 &);
