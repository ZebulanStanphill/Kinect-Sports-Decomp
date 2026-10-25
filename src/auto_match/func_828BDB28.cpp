// std::list<T>::_Splice_same from Visual C++ 2010's <list>. It moves the nodes
// [first, last) of one list before where in this one. Element_828BDB28 is a
// placeholder for the game's 4-byte element type. This code doesn't depend on
// the list's allocator, so std::allocator stands in for it. Other units call this function by its fn_ name, so it is a wrapper around the member.
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

struct Element_828BDB28 {
    int data[1];
};

typedef std::list<Element_828BDB28> List;

// _Splice_same is protected
struct Access : List {
    using List::_Splice_same;
};

extern "C" void fn_828BDB28(List *self, List::const_iterator where, List &right, List::const_iterator first,
                             List::const_iterator last, unsigned int count)
{
    static_cast<Access *>(self)->_Splice_same(where, right, first, last, count);
}
