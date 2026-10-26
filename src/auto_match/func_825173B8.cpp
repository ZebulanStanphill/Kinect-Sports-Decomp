// std::vector<T>::reserve from Visual C++ 2010's <vector>. Element_825173B8 is
// a placeholder for the game's 16-byte element type, which holds two
// Half_825173B8 values of a pointer and a reference count block each. Its move
// constructor is fn_82517608, which takes the two halves of the source
// separately and swaps them in; this looks like the moving constructor of a
// std::pair of two std::tr1::shared_ptr. A real std::pair can't be used,
// because its default construction adds stores. The vector allocates through
// Allocator_825089A0 with category 1.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. std::_Destroy_range stays a call to fn_82237848, which is shared with
// another instantiation. The allocator calls fn_825089A0, and the
// specializations call fn_82517608, fn_82237848 and std::_Xlength_error, by the
// names that C units use.

#include <vector>

#include "game/Allocator_825089A0.h"

struct Half_825173B8 {
    void *ptr;
    void *rep;
};

struct Element_825173B8 {
    Element_825173B8(Element_825173B8 &&other);
    Half_825173B8 first;
    Half_825173B8 second;
};

extern "C" void fn_82517608(Element_825173B8 *self, Half_825173B8 *first, Half_825173B8 *second);

__forceinline Element_825173B8::Element_825173B8(Element_825173B8 &&other)
{
    fn_82517608(this, &other.first, &other.second);
}

typedef Element_825173B8 T;
typedef Allocator_825089A0<T, 1> Alloc;
typedef std::vector<T, Alloc> Vector;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_82237848(T *first, T *last, Alloc *al);
}

template <> __forceinline void std::_Destroy_range(T *first, T *last, Alloc &al)
{
    fn_82237848(first, last, &al);
}

template <> void Vector::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template void Vector::reserve(size_type);
