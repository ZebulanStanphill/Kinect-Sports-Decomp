// std::_Rotate for random-access iterators over 64-bit elements, from Visual C++ 2010's
// <xutility>. Link-time code generation dropped the unused iterator-tag argument, so the
// function takes the three pointers only.

#include <xutility>

typedef __int64 T;

extern "C" void fn_825393A0(T *first, T *mid, T *last)
{
    std::_Rotate(first, mid, last, std::random_access_iterator_tag());
}
