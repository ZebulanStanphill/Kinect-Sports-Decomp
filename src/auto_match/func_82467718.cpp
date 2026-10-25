// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_82467718 is a placeholder for the game's 372-byte element type.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and this vector's reserve
// (fn_82467E98) by the names that C units use.

#include <vector>

struct Element_82467718 {
    int data[93];
};

typedef Element_82467718 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_82467E98(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_82467E98(this, count);
}

template void std::vector<T>::push_back(const T &);
