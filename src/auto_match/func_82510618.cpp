// std::_Unguarded_partition over 16-byte elements ordered by the unsigned key at +0, from
// Visual C++ 2010's <algorithm>, instantiated out of line for std::_Sort (fn_82510438);
// std::_Med3 stays a call to fn_82510BE8.

#include <algorithm>

struct Element_82510438 {
    unsigned int key;    /* 0x0 */
    unsigned int second; /* 0x4 */
    unsigned int third;  /* 0x8 */
    unsigned int fourth; /* 0xc */
};

struct Less_82510438 {
    bool operator()(const Element_82510438 &left, const Element_82510438 &right) const
    {
        return left.key < right.key;
    }
};

typedef Element_82510438 T;
typedef Less_82510438 P;

extern "C" void fn_82510BE8(T *first, T *mid, T *last);

template <> __forceinline void std::_Med3(T *first, T *mid, T *last, P predicate)
{
    fn_82510BE8(first, mid, last);
}

template std::pair<T *, T *> std::_Unguarded_partition<T *, P>(T *first, T *last, P predicate);
