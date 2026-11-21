// std::_Unguarded_partition over 12-byte elements with a function-pointer predicate, from
// Visual C++ 2010's <algorithm>, instantiated out of line for std::_Sort (fn_823DA180);
// std::_Med3 stays a call to fn_823DA800.

#include <algorithm>

struct Element_823DA180 {
    unsigned int first;  /* 0x0 */
    unsigned int second; /* 0x4 */
    unsigned int third;  /* 0x8 */
};

typedef Element_823DA180 T;
typedef bool (*P)(const T &left, const T &right);

extern "C" void fn_823DA800(T *first, T *mid, T *last, P predicate);

template <> __forceinline void std::_Med3(T *first, T *mid, T *last, P predicate)
{
    fn_823DA800(first, mid, last, predicate);
}

template std::pair<T *, T *> std::_Unguarded_partition<T *, P>(T *first, T *last, P predicate);
