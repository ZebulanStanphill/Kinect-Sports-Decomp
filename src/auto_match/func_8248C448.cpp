// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_8248C448 is a placeholder for the game's 104-byte element type, whose
// copy constructor is fn_8248CC38.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Xlength_error and this vector's reserve
// (fn_8248C978) by the names that C units use.

#include <vector>

struct Element_8248C448 {
    Element_8248C448();
    Element_8248C448(const Element_8248C448 &other);
    ~Element_8248C448();
    Element_8248C448 &operator=(const Element_8248C448 &other);
    int data[26];
};

extern "C" void fn_8248CC38(Element_8248C448 *self, const Element_8248C448 *other);

inline Element_8248C448::Element_8248C448(const Element_8248C448 &other)
{
    fn_8248CC38(this, &other);
}

typedef Element_8248C448 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_8248C978(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_8248C978(this, count);
}

template void std::vector<T>::push_back(const T &);
