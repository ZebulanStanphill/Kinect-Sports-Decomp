// std::vector<T>::resize(size_type) from Visual C++ 2010's <vector>, for the
// vector of 12-byte elements (Element_82834F10). _Reserve is the out-of-line
// member; erase(first, last) is the folded fn_82834EA0, which keeps its name.
// The function keeps its fn_ name because Matching C++ callers use it.
#include <vector>

struct Element_82834F10 {
    int data[3];
};

typedef Element_82834F10 T;
typedef std::vector<T> V;

struct PointIterator_82834EA0 {
    T *ptr;
};
extern "C" PointIterator_82834EA0 *fn_82834EA0(PointIterator_82834EA0 *result, V *self,
                                               V::const_iterator first, V::const_iterator last);

template <> void V::_Reserve(size_type count);

template <> __forceinline V::iterator V::erase(const_iterator first, const_iterator last)
{
    PointIterator_82834EA0 result;
    return iterator(fn_82834EA0(&result, this, first, last)->ptr, this);
}

// Callers (func_82874FC8) reach the instance by its fn_ name; the body is
// VC10's resize, inlined.
extern "C" void fn_82875368(V *self, V::size_type count)
{
    self->resize(count);
}
