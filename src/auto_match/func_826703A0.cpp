// std::vector<T>::_Buy from Visual C++ 2010's <vector>. Element_826703A0 is a
// placeholder for the game's 8-byte element type.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and std::_Allocate
// (fn_822CB2D8) by the names that C units use.

#include <vector>

struct Element_826703A0 {
    int data[2];
};

typedef Element_826703A0 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
T *fn_822CB2D8(unsigned int count, T *);
}

template <> __forceinline T *std::_Allocate(size_t count, T *)
{
    return fn_822CB2D8(count, (T *)0);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template bool std::vector<T>::_Buy(size_type);
