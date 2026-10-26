// std::vector<T>::insert(const_iterator, const_iterator, const_iterator) from
// Visual C++ 2010's <vector>, which inserts a range of the vector's own type.
// T is __int64 or another 8-byte scalar type.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. std::_Rotate stays a call to fn_825393A0, which takes only the three
// pointers (link-time code generation dropped the iterator tag). The
// specializations call std::_Allocate (fn_822CB2D8), fn_825393A0, operator
// delete and std::_Xlength_error by the names that C units use.

#include <vector>

typedef __int64 T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
T *fn_822CB2D8(unsigned int count, T *);
void fn_825393A0(T *first, T *mid, T *last);
}

template <> __forceinline T *std::_Allocate(size_t count, T *)
{
    return fn_822CB2D8(count, (T *)0);
}

template <> void std::allocator<T>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void std::_Rotate(T *first, T *mid, T *last, std::random_access_iterator_tag)
{
    fn_825393A0(first, mid, last);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template void std::vector<T>::insert(const_iterator, const_iterator, const_iterator);
