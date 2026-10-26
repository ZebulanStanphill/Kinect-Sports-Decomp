// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_8233E9E0 is a placeholder for the game's 8-byte element type, which
// holds a float and a 32-bit value. Its copy constructor copies them one by
// one:
// with the implicit one, the compiler computes the address of an element
// inside the vector later than the original does.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and this vector's reserve
// (fn_8233EEA8) by the names that C units use.

#include <vector>

struct Element_8233E9E0 {
    Element_8233E9E0(const Element_8233E9E0 &other);
    float unk0;
    int unk4;
};

inline Element_8233E9E0::Element_8233E9E0(const Element_8233E9E0 &other)
    : unk0(other.unk0), unk4(other.unk4)
{
}

typedef Element_8233E9E0 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_8233EEA8(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_8233EEA8(this, count);
}

template void std::vector<T>::push_back(const T &);
