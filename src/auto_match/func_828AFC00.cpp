// std::vector<Element_828AF0E0>::operator= from Visual C++ 2010's <vector>, with the
// 12-byte element copies inlined. clear() is the C unit fn_828AF5C0; _Buy is the
// C++ unit func_828AF0E0.cpp. The C caller fn_828AFE40 uses the fn_ name.

#include <vector>

struct Element_828AF0E0 {
    int data[3];
};

typedef Element_828AF0E0 T;
typedef std::vector<T> Vector;

extern "C" {
void fn_828AF5C0(Vector *self);
void fn_8265CA20(void *p);
}

template <> __forceinline void std::allocator<T>::deallocate(pointer p, size_type)
{
    fn_8265CA20(p);
}

template <> bool Vector::_Buy(size_type count);

template <> __forceinline void Vector::clear()
{
    fn_828AF5C0(this);
}

extern "C" Vector *fn_828AFC00(Vector *self, const Vector *other)
{
    *self = *other;
    return self;
}
