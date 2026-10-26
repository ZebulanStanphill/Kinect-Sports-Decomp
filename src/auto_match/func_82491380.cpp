// std::vector<T>::reserve from Visual C++ 2010's <vector>. Element_82491380 is
// a placeholder for the game's 8-byte element type. The vector allocates
// through Allocator_8248F890. Other units call this function by its fn_ name,
// so it is a wrapper around the member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The allocator calls fn_8248F890 and fn_8248F8E8, and the specialization
// calls std::_Xlength_error, by the names that C units use.

#include <vector>

#include "game/Allocator_8248F890.h"

struct Element_82491380 {
    int data[2];
};

typedef Element_82491380 T;
typedef std::vector<T, Allocator_8248F890<T> > Vector;

extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);

template <> void Vector::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

extern "C" void fn_82491380(Vector *self, unsigned int count)
{
    self->reserve(count);
}
