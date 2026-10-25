// std::vector<T>::reserve from Visual C++ 2010's <vector>. Element_828DAFD8 is
// a placeholder for the game's 8-byte element type.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call operator delete, std::_Xlength_error and
// std::allocator<T>::allocate (fn_828E62F0) by the names that C units use.

#include <vector>

struct Element_828DAFD8 {
    int data[2];
};

typedef Element_828DAFD8 T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
T *fn_828E62F0(std::allocator<T> *self, unsigned int count);
}

template <> __forceinline T *std::allocator<T>::allocate(size_type count)
{
    return fn_828E62F0(this, count);
}

template <> void std::allocator<T>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template void std::vector<T>::reserve(size_type);
