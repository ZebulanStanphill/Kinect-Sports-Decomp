// std::deque<T>::_Tidy from Visual C++ 2010's <deque>. It frees the deque's
// blocks and map. Element_8288C358 is a placeholder for the game's 1-byte
// element type. The container allocates through the object fn_825089A0 returns
// (see game/Allocator_825089A0.h); this code only frees, so the allocation
// constant doesn't matter and 0 stands in for it. Other units call this
// function by its fn_ name, so it is a wrapper around the member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much.

// The headers call std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <deque>
#undef _Xlength_error
#include "game/Allocator_825089A0.h"

struct Element_8288C358 {
    char data;
};

typedef std::deque<Element_8288C358, Allocator_825089A0<Element_8288C358, 0> > Deque;

// _Tidy is protected
struct Access : Deque {
    using Deque::_Tidy;
};

extern "C" void fn_8288C358(Deque *self)
{
    static_cast<Access *>(self)->_Tidy();
}
