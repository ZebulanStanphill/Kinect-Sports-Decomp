// std::_Rotate for random-access iterators over an 8-byte element, from Visual C++ 2010's
// <xutility>. Link-time code generation dropped the unused iterator-tag argument, so the
// function takes the three pointers only. std::iter_swap finds the element's own swap by
// argument-dependent lookup; it exchanges the word at +4 before the word at +0.

#include <xutility>

struct Element_827D8B98 {
    int first;  /* 0x00 */
    int second; /* 0x04 */
};

inline void swap(Element_827D8B98 &left, Element_827D8B98 &right)
{
    std::swap(left.second, right.second);
    std::swap(left.first, right.first);
}

typedef Element_827D8B98 T;

extern "C" void fn_827D8B98(T *first, T *mid, T *last)
{
    std::_Rotate(first, mid, last, std::random_access_iterator_tag());
}
