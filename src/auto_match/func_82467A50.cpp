// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_82467A50 is a placeholder for the game's 20-byte element type, whose
// copy constructor is fn_82468D38.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and this vector's reserve
// (fn_824680D0) by the names that C units use.

#include <vector>

struct Element_82467A50 {
    Element_82467A50();
    Element_82467A50(const Element_82467A50 &other);
    ~Element_82467A50();
    Element_82467A50 &operator=(const Element_82467A50 &other);
    int data[5];
};

extern "C" void fn_82468D38(Element_82467A50 *self, const Element_82467A50 *other);

inline Element_82467A50::Element_82467A50(const Element_82467A50 &other)
{
    fn_82468D38(this, &other);
}

typedef Element_82467A50 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_824680D0(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_824680D0(this, count);
}

template void std::vector<T>::push_back(const T &);
