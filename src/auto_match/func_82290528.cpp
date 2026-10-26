// std::vector<T>::resize(size_type) from Visual C++ 2010's <vector>.
// Element_82290528 is a placeholder for the game's 512-byte element type.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call this vector's reserve (fn_82290858),
// operator delete and std::_Xlength_error by the names that C units use.

#include <vector>

struct Element_82290528 {
    int data[128];
};

typedef Element_82290528 T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_82290858(std::vector<T> *self, unsigned int count);
}

template <> void std::allocator<T>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_82290858(this, count);
}

template void std::vector<T>::resize(size_type);
