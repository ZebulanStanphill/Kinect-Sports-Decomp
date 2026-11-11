// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector> for the
// vector of 44-byte Element_82878778 (see func_82878778.cpp, its _Reserve).
// The element's copy constructor is the out-of-line fn_828783B8. Callers
// (func_82877FC0.cpp) use the C name, so the function stays extern "C".
#include <vector>

struct Element_82878778;

extern "C" void fn_828783B8(Element_82878778 *self, const Element_82878778 *other);

struct Element_82878778 {
    int data[11];
    Element_82878778(const Element_82878778 &other)
    {
        fn_828783B8(this, &other);
    }
};

typedef Element_82878778 T;

template <> void std::vector<T>::_Reserve(size_type);

extern "C" void fn_828788D0(std::vector<T> *self, const T *element)
{
    self->push_back(*element);
}
