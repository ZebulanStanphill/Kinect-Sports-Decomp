// std::_Rotate for random-access iterators over a 28-byte element, from Visual C++ 2010's
// <xutility>. Link-time code generation dropped the unused iterator-tag argument, so the
// function takes the three pointers only; std::iter_swap stays a call to fn_822DD818.

#include <xutility>

struct Element_822DD750 {
    int words[7];
};

typedef Element_822DD750 T;

extern "C" void fn_822DD818(T *left, T *right);

template <> __forceinline void std::iter_swap(T *left, T *right)
{
    fn_822DD818(left, right);
}

extern "C" void fn_822DD750(T *first, T *mid, T *last)
{
    std::_Rotate(first, mid, last, std::random_access_iterator_tag());
}
