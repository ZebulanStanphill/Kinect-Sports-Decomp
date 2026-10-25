// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_8250A9F0 is a placeholder for the game's 96-byte element type, whose
// copy constructor is fn_8250B068.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and this vector's reserve
// (fn_8250AB88) by the names that C units use.

#include <vector>

struct Element_8250A9F0 {
    Element_8250A9F0();
    Element_8250A9F0(const Element_8250A9F0 &other);
    ~Element_8250A9F0();
    Element_8250A9F0 &operator=(const Element_8250A9F0 &other);
    int data[24];
};

extern "C" void fn_8250B068(Element_8250A9F0 *self, const Element_8250A9F0 *other);

inline Element_8250A9F0::Element_8250A9F0(const Element_8250A9F0 &other)
{
    fn_8250B068(this, &other);
}

typedef Element_8250A9F0 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_8250AB88(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_8250AB88(this, count);
}

template void std::vector<T>::push_back(const T &);
