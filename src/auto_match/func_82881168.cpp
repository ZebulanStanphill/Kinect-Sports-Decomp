// std::vector<unsigned char>::operator= (VC10 <vector>): _Buy is fn_82880710.
#include <vector>

typedef std::vector<unsigned char> ByteVector;

extern "C" bool fn_82880710(ByteVector *self, unsigned int n);
extern "C" void fn_8265CA20(void *p);

template <> __forceinline bool ByteVector::_Buy(size_type n) { return fn_82880710(this, n); }
template <> __forceinline void std::allocator<unsigned char>::deallocate(pointer p, size_type) { fn_8265CA20(p); }

extern "C" ByteVector *fn_82881168(ByteVector *self, const ByteVector *other)
{
    *self = *other;
    return self;
}
