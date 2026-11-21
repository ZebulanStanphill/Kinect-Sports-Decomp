// std::_Sort over 12-byte elements with a function-pointer predicate, from Visual C++ 2010's
// <algorithm>. std::_Unguarded_partition (fn_823DA348), _Adjust_heap (fn_823DA900) and
// _Insertion_sort1 (fn_823DA6E0) stay out of line; make_heap, sort_heap and the rest of the
// insertion sort are inlined.

#include <algorithm>

struct Element_823DA180 {
    unsigned int first;  /* 0x0 */
    unsigned int second; /* 0x4 */
    unsigned int third;  /* 0x8 */
};

typedef Element_823DA180 T;
typedef bool (*P)(const T &left, const T &right);

extern "C" void fn_823DA900(T *first, int hole, int bottom, T *value, P predicate);
extern "C" void fn_823DA6E0(T *first, T *last, P predicate);

namespace std
{
// fn_823DA348, out of line.
template <> pair<T *, T *> _Unguarded_partition<T *, P>(T *first, T *last, P predicate);

template <>
__forceinline void _Adjust_heap<T *, int, T, P>(T *first, int hole, int bottom, T &&value, P predicate)
{
    fn_823DA900(first, hole, bottom, &value, predicate);
}

// The outer first != last test of _Insertion_sort1 stays here; fn_823DA6E0 has only the loop.
template <> __forceinline void _Insertion_sort1<T *, P, T>(T *first, T *last, P predicate, T *)
{
    if (first != last) {
        fn_823DA6E0(first, last, predicate);
    }
}
} // namespace std

template void std::_Sort<T *, int, P>(T *first, T *last, int ideal, P predicate);
