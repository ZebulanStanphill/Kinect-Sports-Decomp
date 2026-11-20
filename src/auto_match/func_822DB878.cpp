// std::_Sort over 20-byte entries ordered by a weighted sum, from Visual C++ 2010's <algorithm>.
// std::_Unguarded_partition (fn_822DBDC8), _Adjust_heap (fn_822DCBC0) and the loop of
// _Insertion_sort1 (fn_822DC578) stay out of line; make_heap and sort_heap are inlined.

#include <algorithm>

struct Entry_822DB878 {
    int id;      /* 0x00 */
    float first; /* 0x04 */
    float base;  /* 0x08 */
    int unknown0C;
    float second; /* 0x10 */
};

struct Predicate_822DB878;

extern "C" bool fn_822D9E28(const Predicate_822DB878 *self, const Entry_822DB878 *left,
                            const Entry_822DB878 *right);

struct Predicate_822DB878 {
    const float *firstWeight;  /* 0x0 */
    const float *secondWeight; /* 0x4 */

    // The original keeps the body out of line.
    bool operator()(const Entry_822DB878 &left, const Entry_822DB878 &right) const
    {
        return fn_822D9E28(this, &left, &right);
    }
};

typedef Entry_822DB878 T;
typedef Predicate_822DB878 P;

extern "C" void fn_822DCBC0(T *first, int hole, int bottom, T *value, P predicate);
extern "C" void fn_822DC578(T *first, T *last, P *predicate);

namespace std
{
// fn_822DBDC8, out of line.
template <> pair<T *, T *> _Unguarded_partition<T *, P>(T *first, T *last, P predicate);

template <>
__forceinline void _Adjust_heap<T *, int, T, P>(T *first, int hole, int bottom, T &&value, P predicate)
{
    fn_822DCBC0(first, hole, bottom, &value, predicate);
}

// The original keeps the test of _Insertion_sort1 here and calls its loop.
template <> __forceinline void _Insertion_sort1<T *, P, T>(T *first, T *last, P predicate, T *)
{
    if (first != last) {
        fn_822DC578(first, last, &predicate);
    }
}
} // namespace std

template void std::_Sort<T *, int, P>(T *first, T *last, int ideal, P predicate);
