// std::_Sort over 0x14-byte entries ordered by ascending priority, from Visual C++ 2010's
// <algorithm>. std::_Unguarded_partition (fn_8250B1A8), _Adjust_heap (fn_8250BE90) and the
// insertion sort (fn_8250B670) stay out of line; make_heap and sort_heap are inlined.

#include <algorithm>

struct Entry_8250BE90 {
    int unk0;       /* 0x00 */
    int unk4;       /* 0x04 */
    float priority; /* 0x08 */
    int unkC;       /* 0x0c */
    int unk10;      /* 0x10 */
};

struct Predicate_8250ACB8 {
    bool operator()(const Entry_8250BE90 &left, const Entry_8250BE90 &right) const
    {
        return left.priority < right.priority;
    }
};

typedef Entry_8250BE90 T;
typedef Predicate_8250ACB8 P;

extern "C" void fn_8250B670(T *first, T *last, P predicate);

namespace std
{
// fn_8250B1A8, out of line.
template <> pair<T *, T *> _Unguarded_partition<T *, P>(T *first, T *last, P predicate);

// fn_8250BE90, out of line.
template <> void _Adjust_heap<T *, int, T, P>(T *first, int hole, int bottom, T &&value, P predicate);

template <> __forceinline void _Insertion_sort<T *, P>(T *first, T *last, P predicate)
{
    fn_8250B670(first, last, predicate);
}
} // namespace std

template void std::_Sort<T *, int, P>(T *first, T *last, int ideal, P predicate);
