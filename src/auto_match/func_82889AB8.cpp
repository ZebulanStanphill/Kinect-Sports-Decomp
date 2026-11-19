// std::_Rotate for random-access iterators over chars, from Visual C++ 2010's <xutility>.
// Link-time code generation dropped the unused iterator-tag argument, so the function
// takes the three pointers only.

#include <xutility>

typedef char Element_82889AB8;

typedef Element_82889AB8 T;

extern "C" void fn_82889AB8(T *first, T *mid, T *last)
{
    std::_Rotate(first, mid, last, std::random_access_iterator_tag());
}
