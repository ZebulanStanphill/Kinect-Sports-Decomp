// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector> for the
// vector of 48-byte Element_828789A8 (see func_828789A8.cpp, its _Reserve).
// The element's copy constructor is the out-of-line fn_82878358. Callers
// (func_82878010.c) use the C name, so the function stays extern "C".
#include <vector>

struct Element_828789A8;

extern "C" void fn_82878358(Element_828789A8 *self, const Element_828789A8 *other);

struct Element_828789A8 {
    int data[12];
    Element_828789A8(const Element_828789A8 &other)
    {
        fn_82878358(this, &other);
    }
};

typedef Element_828789A8 T;

template <> void std::vector<T>::_Reserve(size_type);

extern "C" void fn_82878A20(std::vector<T> *self, const T *element)
{
    self->push_back(*element);
}
