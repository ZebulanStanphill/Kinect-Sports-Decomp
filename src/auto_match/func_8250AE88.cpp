// std::_Sort over 20-byte entries, from Visual C++ 2010's <algorithm>. std::_Unguarded_partition
// (fn_8250B780), _Adjust_heap (fn_8250C138) and the loop of _Insertion_sort1 (fn_8250BC10) stay
// out of line; make_heap and sort_heap are inlined.

#include <algorithm>

struct Entry_8250AE88 {
    int unk0;  /* 0x00 */
    float x;   /* 0x04 */
    float y;   /* 0x08 */
    int unkC;  /* 0x0c */
    int unk10; /* 0x10 */
};

extern "C" bool fn_8250A688(const Entry_8250AE88 *left, const Entry_8250AE88 *right);

struct Predicate_8250AE88 {
    // The original keeps the body out of line.
    bool operator()(const Entry_8250AE88 &left, const Entry_8250AE88 &right) const
    {
        return fn_8250A688(&left, &right);
    }
};

typedef Entry_8250AE88 T;
typedef Predicate_8250AE88 P;

extern "C" void fn_8250C138(T *first, int hole, int bottom, T *value, P predicate);
extern "C" void fn_8250BC10(T *first, T *last, P *predicate);

namespace std
{
// fn_8250B780, out of line.
template <> pair<T *, T *> _Unguarded_partition<T *, P>(T *first, T *last, P predicate);

template <>
__forceinline void _Adjust_heap<T *, int, T, P>(T *first, int hole, int bottom, T &&value, P predicate)
{
    fn_8250C138(first, hole, bottom, &value, predicate);
}

// The original keeps the test of _Insertion_sort1 here and calls its loop.
template <> __forceinline void _Insertion_sort1<T *, P, T>(T *first, T *last, P predicate, T *)
{
    if (first != last) {
        fn_8250BC10(first, last, &predicate);
    }
}
} // namespace std

template void std::_Sort<T *, int, P>(T *first, T *last, int ideal, P predicate);
