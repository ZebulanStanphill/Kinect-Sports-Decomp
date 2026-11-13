// std::vector<92-byte POD>::operator= (VC10 <vector>), with _Buy out of line
// as fn_822A53D8 and deallocate as operator delete fn_8265CA20.
#include <vector>

struct Elem_822A51A0 {
    unsigned char b[0x5c];
};
typedef Elem_822A51A0 T;
typedef std::vector<T> Vector;

extern "C" {
bool fn_822A53D8(Vector *self, unsigned int count);
void fn_8265CA20(void *ptr);
}

template <> __forceinline bool Vector::_Buy(size_type n) { return fn_822A53D8(this, n); }
template <> __forceinline void std::allocator<T>::deallocate(pointer ptr, size_type) { fn_8265CA20(ptr); }

extern "C" Vector *fn_822A51A0(Vector *self, const Vector *other)
{
    *self = *other;
    return self;
}
