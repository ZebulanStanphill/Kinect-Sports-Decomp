// std::list<T>::_Insert(const_iterator, const T &) from Visual C++ 2010's
// <list>. Element_827E0508 is a placeholder for the game's 8-byte element
// type. The list's allocator is the heap allocator in
// game/Allocator_827D8E60.h. _Buynode is out of line (fn_827D8B38): it
// allocates the node through the heap and copies the value word by word.
// Other units call this function by its fn_ name, so it is a wrapper around
// the member.
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
#include "game/Allocator_827D8E60.h"

struct Element_827E0508 {
    int data[2];
};

typedef std::list<Element_827E0508, Allocator_827D8E60<Element_827E0508> > List;
typedef std::_List_val<Element_827E0508, Allocator_827D8E60<Element_827E0508> > ListVal;

extern "C" ListVal::_Nodeptr fn_827D8B38(ListVal *self, ListVal::_Nodeptr next, ListVal::_Nodeptr prev,
                                          const Element_827E0508 *value);

template <>
__forceinline ListVal::_Nodeptr ListVal::_Buynode(_Nodeptr next, _Nodeptr prev, const Element_827E0508 &value)
{
    return fn_827D8B38(this, next, prev, &value);
}

extern "C" void fn_827E0508(List *self, List::const_iterator where, const Element_827E0508 &value)
{
    self->_Insert(where, value);
}
