// std::vector<T>::_Buy from Visual C++ 2010's <vector>. Element_828E2EC0 is a
// placeholder for the game's 4-byte element type.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and
// std::allocator<T>::allocate (fn_8288BD00) by the names that C units use.

#include <vector>

struct Element_828E2EC0 {
    int data[1];
};

typedef Element_828E2EC0 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
T *fn_8288BD00(std::allocator<T> *self, unsigned int count);
}

template <> __forceinline T *std::allocator<T>::allocate(size_type count)
{
    return fn_8288BD00(this, count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template bool std::vector<T>::_Buy(size_type);
