// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_82376640 is a placeholder for the game's 8-byte element type, whose
// copy constructor is fn_82365BD8.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and this vector's reserve
// (fn_8232CA90) by the names that C units use.

#include <vector>

struct Element_82376640 {
    Element_82376640();
    Element_82376640(const Element_82376640 &other);
    ~Element_82376640();
    Element_82376640 &operator=(const Element_82376640 &other);
    int data[2];
};

extern "C" void fn_82365BD8(Element_82376640 *self, const Element_82376640 *other);

inline Element_82376640::Element_82376640(const Element_82376640 &other)
{
    fn_82365BD8(this, &other);
}

typedef Element_82376640 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_8232CA90(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_8232CA90(this, count);
}

template void std::vector<T>::push_back(const T &);
