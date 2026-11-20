// std::_Sort over 24-byte entries ordered by (major, minor), from Visual C++ 2010's <algorithm>.
// std::_Unguarded_partition (fn_82551528), _Adjust_heap (fn_82551ED8) and the insertion sort
// (fn_825519F8) stay out of line; make_heap and sort_heap are inlined.

#include <algorithm>

struct Entry_825510B0 {
    int v[4];  /* 0x00 */
    int major; /* 0x10 */
    int minor; /* 0x14 */
};

struct Less_825510B0 {
    bool operator()(const Entry_825510B0 &left, const Entry_825510B0 &right) const
    {
        if (left.major == right.major) {
            return left.minor < right.minor;
        }
        return left.major < right.major;
    }
};

typedef Entry_825510B0 T;
typedef Less_825510B0 P;

extern "C" void fn_82551ED8(T *data, int hole, int count, T *value, P predicate);
extern "C" void fn_825519F8(T *first, T *last, P predicate);

namespace std
{
// fn_82551528, out of line.
template <> pair<T *, T *> _Unguarded_partition<T *, P>(T *first, T *last, P predicate);

template <>
__forceinline void _Adjust_heap<T *, int, T, P>(T *first, int hole, int bottom, T &&value, P predicate)
{
    fn_82551ED8(first, hole, bottom, &value, predicate);
}

template <> __forceinline void _Insertion_sort<T *, P>(T *first, T *last, P predicate)
{
    fn_825519F8(first, last, predicate);
}
} // namespace std

template void std::_Sort<T *, int, P>(T *first, T *last, int ideal, P predicate);
