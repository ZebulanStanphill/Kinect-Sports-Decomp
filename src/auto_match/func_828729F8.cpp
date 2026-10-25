// std::vector<T>::_Buy from Visual C++ 2010's <vector>. Element_828729F8 is a
// placeholder for the game's 12-byte element type.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and std::_Allocate
// (fn_8266C8F0) by the names that C units use.

#include <vector>

struct Element_828729F8 {
    int data[3];
};

typedef Element_828729F8 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
T *fn_8266C8F0(unsigned int count, T *);
}

template <> __forceinline T *std::_Allocate(size_t count, T *)
{
    return fn_8266C8F0(count, (T *)0);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template bool std::vector<T>::_Buy(size_type);
