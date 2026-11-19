// std::_Rotate for random-access iterators over an 8-byte element, from Visual C++ 2010's
// <xutility>. Link-time code generation dropped the unused iterator-tag argument, so the
// function takes the three pointers only.

#include <xutility>

struct Element_82276128 {
    int words[2];
};

typedef Element_82276128 T;

extern "C" void fn_82276128(T *first, T *mid, T *last)
{
    std::_Rotate(first, mid, last, std::random_access_iterator_tag());
}
