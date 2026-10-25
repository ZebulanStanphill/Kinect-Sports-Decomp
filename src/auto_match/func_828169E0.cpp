// std::vector<T>::_Reserve from Visual C++ 2010's <vector>. It makes room for
// new elements, growing the capacity by half or to the size needed.
// Element_82816868 is a placeholder for the game's 20-byte element type.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specialization of _Xlen calls std::_Xlength_error by the name that
// C units use.
//
// reserve is defined in its own unit (func_82816868).

#include <vector>

struct Element_82816868 {
    int data[5];
};

typedef Element_82816868 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> void std::vector<T>::reserve(size_type);

template void std::vector<T>::_Reserve(size_type);
