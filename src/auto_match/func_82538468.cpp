// std::vector<T>::resize(size_type) from Visual C++ 2010's <vector>, for the
// vector of game/Element_82538468.h. The allocator and _Xlen keep the names
// that C units use for operator delete and std::_Xlength_error; reserve is the
// out-of-line fn_82538598 and erase(first, last) the out-of-line member.
#include "game/Element_82538468.h"

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_82538598(void *self, unsigned int count);
}
typedef Element_82538468 E;
typedef Vector_82538468 V;

template <> void std::allocator<E>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}
template <> void V::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}
template <> __forceinline void V::reserve(size_type count)
{
    fn_82538598(this, count);
}
template <> V::iterator V::erase(const_iterator, const_iterator);
template void V::resize(size_type);
