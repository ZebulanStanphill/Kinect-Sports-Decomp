// std::vector<T>::reserve from Visual C++ 2010's <vector>. T is __vector4, the
// 16-byte VMX vector type that XMVECTOR is declared as. Building with
// /QVMXReserve (in objects.json) makes the copy use the same vector registers
// as the original.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. It also dropped the unused pointer argument of std::_Allocate
// (fn_82386E68). The specializations call std::_Allocate, operator delete and
// std::_Xlength_error by the names that C units use.

#include <vector>

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float f[4];
    unsigned int u[4];
} __vector4;

typedef __vector4 T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
T *fn_82386E68(unsigned int count);
}

template <> __forceinline T *std::_Allocate(size_t count, T *)
{
    return fn_82386E68(count);
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
