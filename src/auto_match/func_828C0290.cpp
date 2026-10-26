// std::list<T>::clear from Visual C++ 2010's <list>. Element_828C0290 is a
// placeholder for the game's 1-byte element type. The container allocates
// through the object fn_825089A0 returns (see game/Allocator_825089A0.h); this
// code only frees, so the allocation constant doesn't matter and 0 stands in
// for it.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much.

// The headers call std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <list>
#undef _Xlength_error
#include "game/Allocator_825089A0.h"

struct Element_828C0290 {
    char data;
};

typedef std::list<Element_828C0290, Allocator_825089A0<Element_828C0290, 0> > List;

template void List::clear();
