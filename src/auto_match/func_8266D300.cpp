// std::_Rotate for random-access iterators over a 12-byte element (a shared_ptr and an int),
// from Visual C++ 2010's <xutility>. Link-time code generation dropped the unused
// iterator-tag argument, so the function takes the three pointers only; std::iter_swap
// stays a call to fn_8266CC70.

#include <xutility>

struct Element_8266D300 {
    int words[3];
};

typedef Element_8266D300 T;

extern "C" void fn_8266CC70(T *left, T *right);

template <> __forceinline void std::iter_swap(T *left, T *right)
{
    fn_8266CC70(left, right);
}

extern "C" void fn_8266D300(T *first, T *mid, T *last)
{
    std::_Rotate(first, mid, last, std::random_access_iterator_tag());
}
