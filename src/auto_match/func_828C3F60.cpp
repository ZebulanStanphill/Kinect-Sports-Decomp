// std::vector<T, Allocator>::reserve from Visual C++ 2010's <vector>.
// Element_828C3F60 is a placeholder for the game's 4-byte element type, whose
// copy constructor is fn_828B6330 and which has a destructor. The vector
// allocates through Allocator_825089A0 with category 1. Other units call this
// function by its fn_ name, so it is a wrapper around the member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. std::_Destroy_range stays a call to fn_828A30A0. The specializations
// call it and std::_Xlength_error by the names that C units use.

#include <vector>

#include "game/Allocator_825089A0.h"

struct Element_828C3F60 {
    Element_828C3F60();
    Element_828C3F60(const Element_828C3F60 &other);
    ~Element_828C3F60();
    Element_828C3F60 &operator=(const Element_828C3F60 &other);
    int data[1];
};

extern "C" void fn_828B6330(Element_828C3F60 *self, const Element_828C3F60 *other);

inline Element_828C3F60::Element_828C3F60(const Element_828C3F60 &other)
{
    fn_828B6330(this, &other);
}

typedef Element_828C3F60 T;
typedef Allocator_825089A0<T, 1> Allocator;
typedef std::vector<T, Allocator> Vector;

extern "C" {
void fn_828A30A0(T *first, T *last, Allocator *al);
__declspec(noreturn) void fn_82F622A8(const char *message);
}

template <> __forceinline void std::_Destroy_range(T *first, T *last, Allocator &al)
{
    fn_828A30A0(first, last, &al);
}

template <> void Vector::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

extern "C" void fn_828C3F60(Vector *self, unsigned int count)
{
    self->reserve(count);
}
