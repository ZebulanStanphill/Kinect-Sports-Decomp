// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_824678B8 is a placeholder for the game's 20-byte element type, whose
// copy constructor is fn_82468C20.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and this vector's reserve
// (fn_82467FB0) by the names that C units use.

#include <vector>

struct Element_824678B8 {
    Element_824678B8();
    Element_824678B8(const Element_824678B8 &other);
    ~Element_824678B8();
    Element_824678B8 &operator=(const Element_824678B8 &other);
    int data[5];
};

extern "C" void fn_82468C20(Element_824678B8 *self, const Element_824678B8 *other);

inline Element_824678B8::Element_824678B8(const Element_824678B8 &other)
{
    fn_82468C20(this, &other);
}

typedef Element_824678B8 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_82467FB0(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_82467FB0(this, count);
}

template void std::vector<T>::push_back(const T &);
