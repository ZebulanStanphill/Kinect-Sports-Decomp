// std::vector<T>::resize(size_type) from Visual C++ 2010's <vector>, for a
// vector of a 4-byte scalar (the zero fill is the scalar _Fill_n). Identical
// code folding gave every 4-byte vector one _Reserve, named after
// Element_82360E28 (func_82360E28.cpp), and every pointer-sized vector one
// erase(first, last), fn_8233EB88; both are reached through forwarding
// specialisations. fn_82832368 keeps its name.
#include <vector>

struct Element_82360E28 {
    int data[1];
};

template <> void std::vector<Element_82360E28>::_Reserve(size_type count);

struct Vector_82360E28 : std::vector<Element_82360E28> {
    using std::vector<Element_82360E28>::_Reserve;
};

typedef std::vector<unsigned int> V;

struct Iterator_8233EB88 {
    unsigned int *ptr;
};

extern "C" Iterator_8233EB88 *fn_8233EB88(Iterator_8233EB88 *result, V *self, V::const_iterator first,
                                          V::const_iterator last);

template <> __forceinline void V::_Reserve(size_type count)
{
    ((Vector_82360E28 *)this)->_Reserve(count);
}

template <> __forceinline V::iterator V::erase(const_iterator first, const_iterator last)
{
    Iterator_8233EB88 result;
    return iterator(fn_8233EB88(&result, this, first, last)->ptr, this);
}

extern "C" void fn_82832368(V *self, V::size_type count)
{
    self->resize(count);
}
