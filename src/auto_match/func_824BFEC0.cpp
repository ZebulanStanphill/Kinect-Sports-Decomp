// std::_Rotate for random-access iterators over a 40-byte plain element, from Visual C++
// 2010's <xutility>. Link-time code generation dropped the unused iterator-tag argument, so
// the function takes the three pointers only.

#include <xutility>

struct Element_824BFEC0 {
    int words[10];
};

typedef Element_824BFEC0 T;

extern "C" void fn_824BFEC0(T *first, T *mid, T *last)
{
    std::_Rotate(first, mid, last, std::random_access_iterator_tag());
}
