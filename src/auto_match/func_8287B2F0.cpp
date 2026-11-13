// std::vector<Element_828729F8>::operator= from Visual C++ 2010's <vector>, with the
// 12-byte element copies inlined (the func_828AFC00 recipe). _Buy is the C++ unit
// func_828729F8.cpp; clear() calls the folded erase(first, last) fn_82834EA0.

#include <vector>

struct Element_828729F8 {
    int data[3];
};

typedef Element_828729F8 T;
typedef std::vector<T> Vector;

struct Iterator_8287B2F0 {
    T *ptr;
};

extern "C" {
void fn_8265CA20(void *p);
Iterator_8287B2F0 *fn_82834EA0(Iterator_8287B2F0 *result, Vector *self,
                               Vector::const_iterator first, Vector::const_iterator last);
}

template <> __forceinline void std::allocator<T>::deallocate(pointer p, size_type)
{
    fn_8265CA20(p);
}

template <> bool Vector::_Buy(size_type count);

template <> __forceinline Vector::iterator Vector::erase(const_iterator first, const_iterator last)
{
    Iterator_8287B2F0 result;
    return iterator(fn_82834EA0(&result, this, first, last)->ptr, this);
}

extern "C" Vector *fn_8287B2F0(Vector *self, const Vector *other)
{
    *self = *other;
    return self;
}
