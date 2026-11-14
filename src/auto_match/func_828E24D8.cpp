// std::vector<T>::resize(size_type) from Visual C++ 2010's <vector>, for the
// vector of 28-byte elements (Element_828E2460). _Reserve is the out-of-line
// member; erase(first, last) is fn_828D81E8 and the default fill loop is
// fn_828E2248, both reached by their fn_ names.
#include <vector>

struct Element_828E2460 {
    int data[7];
};

typedef Element_828E2460 T;
typedef std::vector<T> V;

struct PointIterator_828D81E8 {
    T *ptr;
};

extern "C" {
PointIterator_828D81E8 *fn_828D81E8(PointIterator_828D81E8 *result, V *self,
                                    V::const_iterator first, V::const_iterator last);
void fn_828E2248(T *first, unsigned int count, const T *pval, std::allocator<T> *al, T *valty,
                 std::_Nonscalar_ptr_iterator_tag tag);
}

template <> void V::_Reserve(size_type count);

template <> __forceinline V::iterator V::erase(const_iterator first, const_iterator last)
{
    PointIterator_828D81E8 result;
    return iterator(fn_828D81E8(&result, this, first, last)->ptr, this);
}

template <> __forceinline void std::_Uninit_def_fill_n<T *, unsigned int, T, std::allocator<T>, T>(
    T *first, unsigned int count, const T *pval, std::allocator<T> &al, T *valty,
    std::_Nonscalar_ptr_iterator_tag tag)
{
    fn_828E2248(first, count, pval, &al, valty, tag);
}

extern "C" void fn_828E24D8(V *self, V::size_type count)
{
    self->resize(count);
}
