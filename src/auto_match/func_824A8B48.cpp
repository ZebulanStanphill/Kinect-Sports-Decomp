// std::list<T>::splice(const_iterator, list &) from Visual C++ 2010's <list>.
// It moves all of another list's nodes before where. Element_824A8B48 is a
// placeholder for the game's 8-byte element type. This code doesn't depend on
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

struct Element_824A8B48 {
    int data[2];
};

typedef std::list<Element_824A8B48> List;

template void List::splice(const_iterator, List &);
