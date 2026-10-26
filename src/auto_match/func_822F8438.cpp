// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_822F8438 is a placeholder for the game's 8-byte element type, which
// holds a 32-bit value and a float. Its copy constructor copies them one by
// one:
// with the implicit one, the compiler computes the address of an element
// inside the vector later than the original does.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and this vector's reserve
// (fn_822F7FA0) by the names that C units use.

#include <vector>

struct Element_822F8438 {
    Element_822F8438(const Element_822F8438 &other);
    int unk0;
    float unk4;
};

inline Element_822F8438::Element_822F8438(const Element_822F8438 &other)
    : unk0(other.unk0), unk4(other.unk4)
{
}

typedef Element_822F8438 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_822F7FA0(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_822F7FA0(this, count);
}

template void std::vector<T>::push_back(const T &);
