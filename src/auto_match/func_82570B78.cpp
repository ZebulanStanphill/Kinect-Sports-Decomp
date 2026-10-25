// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_82570B78 is a placeholder for the game's 48-byte element type, which
// is 16-byte aligned.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and this vector's reserve
// (fn_82570D40) by the names that C units use.

#include <vector>

struct __declspec(align(16)) Element_82570B78 {
    float data[12];
};

typedef Element_82570B78 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_82570D40(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_82570D40(this, count);
}

template void std::vector<T>::push_back(const T &);
