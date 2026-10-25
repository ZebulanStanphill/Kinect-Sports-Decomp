// std::vector<T>::_Buy from Visual C++ 2010's <vector>. Element_828C9250 is a
// placeholder for the game's 8-byte element type.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and
// std::allocator<T>::allocate (fn_822CAE28) by the names that C units use.

#include <vector>

struct Element_828C9250 {
    int data[2];
};

typedef Element_828C9250 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
T *fn_822CAE28(std::allocator<T> *self, unsigned int count);
}

template <> __forceinline T *std::allocator<T>::allocate(size_type count)
{
    return fn_822CAE28(this, count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template bool std::vector<T>::_Buy(size_type);
