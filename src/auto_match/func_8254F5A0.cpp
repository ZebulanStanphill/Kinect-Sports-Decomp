// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_8254F5A0 is a placeholder for the game's 96-byte element type.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and this vector's reserve
// (fn_8254F488) by the names that C units use.

#include <vector>

struct Element_8254F5A0 {
    int data[24];
};

typedef Element_8254F5A0 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_8254F488(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_8254F488(this, count);
}

template void std::vector<T>::push_back(const T &);
