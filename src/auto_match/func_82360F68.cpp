// std::vector<T>::reserve from Visual C++ 2010's <vector>. T is a pointer to
// Element_82360F68, a placeholder; any 4-byte integer or pointer type compiles
// to the same code. C units call this function, so it keeps its fn_ name as a
// wrapper around the member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call operator delete, std::_Xlength_error and
// std::_Allocate (fn_82E21DB0) by the names that C units use.

#include <vector>

struct Element_82360F68;

typedef Element_82360F68 *T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
T *fn_82E21DB0(unsigned int count, T *);
}

template <> __forceinline T *std::_Allocate(size_t count, T *)
{
    return fn_82E21DB0(count, (T *)0);
}

template <> void std::allocator<T>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

extern "C" void fn_82360F68(std::vector<T> *self, unsigned int count)
{
    self->reserve(count);
}
