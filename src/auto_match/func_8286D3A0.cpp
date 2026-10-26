// std::list<T>::_Insert(const_iterator, const T &) from Visual C++ 2010's
// <list>. Element_8286D3A0 is a placeholder for the game's 4-byte element
// type. _Buynode is out of line (fn_8286D338): it allocates the node with
// operator new (fn_8265C9E0), as std::allocator does.
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

struct Element_8286D3A0 {
    int data;
};

typedef std::list<Element_8286D3A0> List;
typedef std::_List_val<Element_8286D3A0, std::allocator<Element_8286D3A0> > ListVal;

extern "C" ListVal::_Nodeptr fn_8286D338(ListVal *self, ListVal::_Nodeptr next, ListVal::_Nodeptr prev,
                                          const Element_8286D3A0 *value);

template <>
__forceinline ListVal::_Nodeptr ListVal::_Buynode(_Nodeptr next, _Nodeptr prev, const Element_8286D3A0 &value)
{
    return fn_8286D338(this, next, prev, &value);
}

template void List::_Insert(const_iterator, const Element_8286D3A0 &);
