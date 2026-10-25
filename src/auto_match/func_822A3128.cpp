// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_822A3128 is a placeholder for the game's 28-byte element type, whose
// copy constructor is fn_822A32C0.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and this vector's reserve
// (fn_823576C8) by the names that C units use.

#include <vector>

struct Element_822A3128 {
    Element_822A3128();
    Element_822A3128(const Element_822A3128 &other);
    ~Element_822A3128();
    Element_822A3128 &operator=(const Element_822A3128 &other);
    int data[7];
};

extern "C" void fn_822A32C0(Element_822A3128 *self, const Element_822A3128 *other);

inline Element_822A3128::Element_822A3128(const Element_822A3128 &other)
{
    fn_822A32C0(this, &other);
}

typedef Element_822A3128 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_823576C8(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_823576C8(this, count);
}

template void std::vector<T>::push_back(const T &);
