// std::vector<unsigned int>::operator= (VC10 <vector>): clear() reaches the ICF-folded
// pointer-element erase(first, last) fn_8233EB88, and _Buy is fn_82424AD0.
#include <vector>

typedef std::vector<unsigned int> UIntVector;

struct Iterator_8233EB88 {
    unsigned int *ptr;
};
extern "C" Iterator_8233EB88 *fn_8233EB88(Iterator_8233EB88 *result, UIntVector *self,
                                          UIntVector::const_iterator first,
                                          UIntVector::const_iterator last);
extern "C" bool fn_82424AD0(UIntVector *self, unsigned int n);
extern "C" void fn_8265CA20(void *p);

template <>
__forceinline UIntVector::iterator UIntVector::erase(const_iterator first, const_iterator last)
{
    Iterator_8233EB88 result;
    return iterator(fn_8233EB88(&result, this, first, last)->ptr, this);
}
template <> __forceinline bool UIntVector::_Buy(size_type n) { return fn_82424AD0(this, n); }
template <> __forceinline void std::allocator<unsigned int>::deallocate(pointer p, size_type) { fn_8265CA20(p); }

extern "C" UIntVector *fn_82424798(UIntVector *self, const UIntVector *other)
{
    *self = *other;
    return self;
}
