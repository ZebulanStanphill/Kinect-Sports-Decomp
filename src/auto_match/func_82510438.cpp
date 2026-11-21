// std::_Sort over 16-byte elements ordered by the unsigned key at +0, from Visual C++ 2010's
// <algorithm>. std::_Unguarded_partition (fn_82510618), _Adjust_heap (fn_82510D60) and the
// insertion sort (fn_82510AC8) stay out of line; make_heap and sort_heap are inlined.

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

extern "C" void fn_82510D60(T *first, int hole, int bottom, T *value, P predicate);
extern "C" void fn_82510AC8(T *first, T *last, P predicate);

namespace std
{
// fn_82510618, out of line.
template <> pair<T *, T *> _Unguarded_partition<T *, P>(T *first, T *last, P predicate);

template <>
__forceinline void _Adjust_heap<T *, int, T, P>(T *first, int hole, int bottom, T &&value, P predicate)
{
    fn_82510D60(first, hole, bottom, &value, predicate);
}

template <> __forceinline void _Insertion_sort<T *, P>(T *first, T *last, P predicate)
{
    fn_82510AC8(first, last, predicate);
}
} // namespace std

template void std::_Sort<T *, int, P>(T *first, T *last, int ideal, P predicate);
