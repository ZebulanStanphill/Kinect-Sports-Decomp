// std::vector<T>::reserve from Visual C++ 2010's <vector>. Element_828D1130 is
// a placeholder for the game's 196-byte element type, which has a copy
// constructor and a trivial destructor. The vector allocates through
// Allocator_825089A0 with category 1. Other units call this function by its fn_
// name, so it is a wrapper around the member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. std::_Uninitialized_move stays a call to fn_828D1070, which takes the
// allocator's address. The allocator calls fn_825089A0, and the
// specializations call fn_828D1070 and std::_Xlength_error, by the names that
// C units use.

#include <vector>

#include "game/Allocator_825089A0.h"

struct Element_828D1130 {
    Element_828D1130(const Element_828D1130 &other);
    int data[49];
};

typedef Element_828D1130 T;
typedef Allocator_825089A0<T, 1> Alloc;
typedef std::vector<T, Alloc> Vector;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
T *fn_828D1070(T *first, T *last, T *dest, Alloc *al);
}

template <> __forceinline T *std::_Uninitialized_move(T *first, T *last, T *dest, Alloc &al)
{
    return fn_828D1070(first, last, dest, &al);
}

template <> void Vector::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

extern "C" void fn_828D1130(Vector *self, unsigned int count)
{
    self->reserve(count);
}
