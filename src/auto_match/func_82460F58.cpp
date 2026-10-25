// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_82460F58 is a placeholder for the game's 284-byte element type.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and this vector's reserve
// (fn_82461140) by the names that C units use.

#include <vector>

struct Element_82460F58 {
    int data[71];
};

typedef Element_82460F58 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_82461140(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_82461140(this, count);
}

template void std::vector<T>::push_back(const T &);
