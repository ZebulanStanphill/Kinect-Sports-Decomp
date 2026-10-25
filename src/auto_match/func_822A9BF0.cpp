// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_822A9BF0 is a placeholder for the game's 16-byte element type, whose
// copy constructor is fn_822AA090.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and this vector's reserve
// (fn_822A9F70) by the names that C units use.

#include <vector>

struct Element_822A9BF0 {
    Element_822A9BF0();
    Element_822A9BF0(const Element_822A9BF0 &other);
    ~Element_822A9BF0();
    Element_822A9BF0 &operator=(const Element_822A9BF0 &other);
    int data[4];
};

extern "C" void fn_822AA090(Element_822A9BF0 *self, const Element_822A9BF0 *other);

inline Element_822A9BF0::Element_822A9BF0(const Element_822A9BF0 &other)
{
    fn_822AA090(this, &other);
}

typedef Element_822A9BF0 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_822A9F70(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_822A9F70(this, count);
}

template void std::vector<T>::push_back(const T &);
