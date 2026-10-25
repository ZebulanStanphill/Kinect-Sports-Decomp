// std::vector<T>::reserve from Visual C++ 2010's <vector>. Element_82816778 is
// a placeholder for the game's 32-byte element type.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call operator delete, std::_Xlength_error and
// std::_Allocate (fn_828166A8) by the names that C units use.

#include <vector>

struct Element_82816778 {
    int data[8];
};

typedef Element_82816778 T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
T *fn_828166A8(unsigned int count, T *);
}

template <> __forceinline T *std::_Allocate(size_t count, T *)
{
    return fn_828166A8(count, (T *)0);
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
