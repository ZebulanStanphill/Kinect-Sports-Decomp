// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_8243D7C0 is a placeholder for the game's 48-byte element type, whose
// copy constructor is fn_8243DED8.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and this vector's reserve
// (fn_8243DC28) by the names that C units use.

#include <vector>

struct Element_8243D7C0 {
    Element_8243D7C0();
    Element_8243D7C0(const Element_8243D7C0 &other);
    ~Element_8243D7C0();
    Element_8243D7C0 &operator=(const Element_8243D7C0 &other);
    int data[12];
};

extern "C" void fn_8243DED8(Element_8243D7C0 *self, const Element_8243D7C0 *other);

inline Element_8243D7C0::Element_8243D7C0(const Element_8243D7C0 &other)
{
    fn_8243DED8(this, &other);
}

typedef Element_8243D7C0 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_8243DC28(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_8243DC28(this, count);
}

template void std::vector<T>::push_back(const T &);
