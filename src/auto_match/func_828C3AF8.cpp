// std::list<T>::_Insert_rv(const_iterator, T &&) from Visual C++ 2010's
// <list>, which push_back(T &&) calls. Element_828C3AF8 is a placeholder for
// the game's 8-byte element type, a shared pointer. _Buynode is out of line
// (fn_828C3A68): it allocates the node with operator new (fn_8265C9E0), as
// std::allocator does, and moves the value in (it zeroes the new element and
// swaps it with the argument).
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

struct Element_828C3AF8 {
    void *ptr;
    void *rep;
};

typedef std::list<Element_828C3AF8> List;
typedef std::_List_val<Element_828C3AF8, std::allocator<Element_828C3AF8> > ListVal;

extern "C" ListVal::_Nodeptr fn_828C3A68(ListVal *self, ListVal::_Nodeptr next, ListVal::_Nodeptr prev,
                                          Element_828C3AF8 *value);

template <>
template <>
__forceinline ListVal::_Nodeptr ListVal::_Buynode<Element_828C3AF8>(_Nodeptr next, _Nodeptr prev,
                                                                      Element_828C3AF8 &&value)
{
    return fn_828C3A68(this, next, prev, &value);
}

template void List::_Insert_rv<Element_828C3AF8>(const_iterator, Element_828C3AF8 &&);
