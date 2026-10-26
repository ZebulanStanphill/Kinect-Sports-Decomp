// std::vector<T, Allocator>::reserve from Visual C++ 2010's <vector>.
// Element_828D3928 is a placeholder for the game's 80-byte element type, whose
// copy constructor is fn_828D36C8 and which has a destructor. The vector
// allocates through Allocator_825089A0 with category 1. Other units call this
// function by its fn_ name, so it is a wrapper around the member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. std::_Destroy_range stays a call to fn_828D3860, which is the overload
// that takes the iterator tag; the one without it is inlined. The
// specializations call fn_828D3860 and std::_Xlength_error by the names that C
// units use.

#include <vector>

#include "game/Allocator_825089A0.h"

struct Element_828D3928 {
    Element_828D3928();
    Element_828D3928(const Element_828D3928 &other);
    ~Element_828D3928();
    Element_828D3928 &operator=(const Element_828D3928 &other);
    int data[20];
};

extern "C" void fn_828D36C8(Element_828D3928 *self, const Element_828D3928 *other);

inline Element_828D3928::Element_828D3928(const Element_828D3928 &other)
{
    fn_828D36C8(this, &other);
}

typedef Element_828D3928 T;
typedef Allocator_825089A0<T, 1> Allocator;
typedef std::vector<T, Allocator> Vector;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_828D3860(T *first, T *last, Allocator *al, std::_Nonscalar_ptr_iterator_tag tag);
}

template <> __forceinline void std::_Destroy_range(T *first, T *last, Allocator &al,
                                                   std::_Nonscalar_ptr_iterator_tag tag)
{
    fn_828D3860(first, last, &al, tag);
}

template <> void Vector::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

extern "C" void fn_828D3928(Vector *self, unsigned int count)
{
    self->reserve(count);
}
