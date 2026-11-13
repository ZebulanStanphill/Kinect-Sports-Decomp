// std::vector<4-byte scalar>::operator= (VC10 <vector>) at /O2: clear() and the
// uninitialized copies inline; _Copy_impl is fn_828DB5B0 and _Buy the folded fn_82424AD0.
#include <vector>

typedef std::vector<unsigned int> UIntVector;

extern "C" bool fn_82424AD0(UIntVector *self, unsigned int n);
extern "C" unsigned int *fn_828DB5B0(unsigned int *first, unsigned int *last, unsigned int *dest);
extern "C" void fn_8265CA20(void *p);

template <> __forceinline bool UIntVector::_Buy(size_type n) { return fn_82424AD0(this, n); }
template <> __forceinline void std::allocator<unsigned int>::deallocate(pointer p, size_type) { fn_8265CA20(p); }
template <> __forceinline unsigned int *std::_Copy_impl<unsigned int *, unsigned int *>(unsigned int *first,
                                                                                       unsigned int *last,
                                                                                       unsigned int *dest)
{
    return fn_828DB5B0(first, last, dest);
}

extern "C" UIntVector *fn_828DB668(UIntVector *self, const UIntVector *other)
{
    *self = *other;
    return self;
}
