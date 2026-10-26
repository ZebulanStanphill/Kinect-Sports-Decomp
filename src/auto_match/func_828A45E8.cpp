// std::list<T>::_Insert(const_iterator, const T &) from Visual C++ 2010's
// <list>. Element_828A45E8 is a placeholder for the game's 8-byte element
// type, a shared pointer. _Buynode is out of line (fn_828A3928): it allocates
// the node with operator new (fn_8265C9E0), as std::allocator does, copies the
// pointer and increments the use count at rep + 4.
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

struct Element_828A45E8 {
    void *ptr;
    void *rep;
};

typedef std::list<Element_828A45E8> List;
typedef std::_List_val<Element_828A45E8, std::allocator<Element_828A45E8> > ListVal;

extern "C" ListVal::_Nodeptr fn_828A3928(ListVal *self, ListVal::_Nodeptr next, ListVal::_Nodeptr prev,
                                          const Element_828A45E8 *value);

template <>
__forceinline ListVal::_Nodeptr ListVal::_Buynode(_Nodeptr next, _Nodeptr prev, const Element_828A45E8 &value)
{
    return fn_828A3928(this, next, prev, &value);
}

template void List::_Insert(const_iterator, const Element_828A45E8 &);
