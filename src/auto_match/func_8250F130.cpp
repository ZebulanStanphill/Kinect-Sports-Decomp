// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_8250F130 is a placeholder for the game's 32-byte element type, which
// holds a 16-byte vector and a std::vector.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. std::_Cons_val stays a call to fn_8250F498, which takes the destination
// and the source (link-time code generation dropped the allocator argument).
// push_back reaches it with both a const and a non-const source, so both are
// specialized; the template arguments have to be given explicitly. The
// specializations call std::_Xlength_error, this vector's reserve (fn_8250F358)
// and fn_8250F498 by the names that C units use.

#include <vector>

struct Element_8250F130 {
    int data[8];
};

typedef Element_8250F130 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_8250F358(std::vector<T> *self, unsigned int count);
void fn_8250F498(T *ptr, const T *value);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_8250F358(this, count);
}

template <> __forceinline void std::_Cons_val<std::allocator<T>, T, T &>(std::allocator<T> &, T *ptr, T &value)
{
    fn_8250F498(ptr, &value);
}

template <> __forceinline void std::_Cons_val<std::allocator<T>, T, const T &>(std::allocator<T> &, T *ptr, const T &value)
{
    fn_8250F498(ptr, &value);
}

template void std::vector<T>::push_back(const T &);
