// std::vector<T>::reserve from Visual C++ 2010's <vector>. T is a pointer to
// Element_8288C1B8, a placeholder; any 4-byte integer or pointer type compiles
// to the same code.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call operator delete, std::_Xlength_error and
// std::allocator<T>::allocate (fn_8288BD00) by the names that C units use.

#include <vector>

struct Element_8288C1B8;

typedef Element_8288C1B8 *T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
T *fn_8288BD00(std::allocator<T> *self, unsigned int count);
}

template <> __forceinline T *std::allocator<T>::allocate(size_type count)
{
    return fn_8288BD00(this, count);
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
