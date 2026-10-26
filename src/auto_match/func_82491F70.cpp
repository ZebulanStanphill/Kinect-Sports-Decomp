// std::vector<T>::insert(const_iterator, const T *, const T *) from Visual C++
// 2010's <vector>, the member template instantiated for a range of pointers.
// Element_82491F70 is a placeholder for the game's 28-byte element type. The
// element is byte-aligned, so each one is copied with memcpy. The vector
// allocates through Allocator_8248F890.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. std::_Rotate stays a call to fn_824923C0, which takes only the three
// pointers (link-time code generation dropped the iterator tag). The allocator
// calls fn_8248F890 and fn_8248F8E8, and the specializations call fn_824923C0
// and std::_Xlength_error, by the names that C units use.

#include <vector>

#include "game/Allocator_8248F890.h"

struct Element_82491F70 {
    unsigned char data[28];
};

typedef Element_82491F70 T;
typedef std::vector<T, Allocator_8248F890<T> > Vector;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_824923C0(T *first, T *mid, T *last);
}

template <> __forceinline void std::_Rotate(T *first, T *mid, T *last, std::random_access_iterator_tag)
{
    fn_824923C0(first, mid, last);
}

template <> void Vector::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template void Vector::insert(const_iterator, const T *, const T *);
