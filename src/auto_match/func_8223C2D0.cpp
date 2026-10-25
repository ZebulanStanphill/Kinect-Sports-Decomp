// std::vector<T>::reserve from Visual C++ 2010's <vector>. T is char or another
// 1-byte scalar type.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call operator delete, std::_Xlength_error and
// std::_Allocate (fn_8223C258) by the names that C units use.

#include <vector>

typedef char T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
T *fn_8223C258(unsigned int count, T *);
}

template <> __forceinline T *std::_Allocate(size_t count, T *)
{
    return fn_8223C258(count, (T *)0);
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
