// std::vector<T>::reserve from Visual C++ 2010's <vector>. Element_828A9BA0 is
// a placeholder for the game's 16-byte element type, which is copied as two
// 64-bit words. The vector allocates through Allocator_825089A0 with category
// 1; because that is not std::allocator, the elements are copied one at a time
// instead of with memmove. Other units call this function by its fn_ name, so
// it is a wrapper around the member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The allocator calls fn_825089A0, and the specialization calls
// std::_Xlength_error, by the names that C units use.

#include <vector>

#include "game/Allocator_825089A0.h"

struct Element_828A9BA0 {
    __int64 data[2];
};

typedef Element_828A9BA0 T;
typedef std::vector<T, Allocator_825089A0<T, 1> > Vector;

extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);

template <> void Vector::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

extern "C" void fn_828A9BA0(Vector *self, unsigned int count)
{
    self->reserve(count);
}
