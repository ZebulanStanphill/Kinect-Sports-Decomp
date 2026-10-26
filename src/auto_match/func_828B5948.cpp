// std::vector<T>::reserve from Visual C++ 2010's <vector>. Element_828B5948 is
// a placeholder for the game's 4-byte element type, which holds two 16-bit
// values. Other units call this function by its fn_ name, so it is a wrapper
// around the member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::allocator<T>::allocate (fn_8288BD00),
// operator delete and std::_Xlength_error by the names that C units use.

#include <vector>

struct Element_828B5948 {
    short unk0;
    short unk2;
};

typedef Element_828B5948 T;

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

extern "C" void fn_828B5948(std::vector<T> *self, unsigned int count)
{
    self->reserve(count);
}
