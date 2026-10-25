// std::vector<T>::_Reserve from Visual C++ 2010's <vector>. It makes room for
// new elements, growing the capacity by half or to the size needed.
// Element_828D8768 is a placeholder for the game's 28-byte element type.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and this vector's reserve
// (fn_828D8698) by the names that C units use.

#include <vector>

struct Element_828D8768 {
    int data[7];
};

typedef Element_828D8768 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_828D8698(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_828D8698(this, count);
}

template void std::vector<T>::_Reserve(size_type);
