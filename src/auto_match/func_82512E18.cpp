// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_82512E18 is a placeholder for the game's 12-byte element type.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and this vector's reserve
// (fn_82512FD8) by the names that C units use.

#include <vector>

struct Element_82512E18 {
    int data[3];
};

typedef Element_82512E18 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_82512FD8(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_82512FD8(this, count);
}

template void std::vector<T>::push_back(const T &);
