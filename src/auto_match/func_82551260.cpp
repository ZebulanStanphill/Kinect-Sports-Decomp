// std::_Sort over (value, priority) entries ordered by ascending priority, from Visual C++ 2010's
// <algorithm>. std::_Unguarded_partition (fn_82551B18) and _Adjust_heap (fn_825520B8) stay out of
// line; make_heap, sort_heap and the insertion sort are inlined.

#include <algorithm>

struct Entry_82551260 {
    unsigned int value; /* 0x0 */
    int priority;       /* 0x4 */
};

struct Less_82551260 {
    bool operator()(const Entry_82551260 &left, const Entry_82551260 &right) const
    {
        return left.priority < right.priority;
    }
};

typedef Entry_82551260 T;
typedef Less_82551260 P;

extern "C" void fn_825520B8(T *first, int hole, int bottom, T *value, P predicate);

namespace std
{
// fn_82551B18, out of line.
template <> pair<T *, T *> _Unguarded_partition<T *, P>(T *first, T *last, P predicate);

template <>
__forceinline void _Adjust_heap<T *, int, T, P>(T *first, int hole, int bottom, T &&value, P predicate)
{
    fn_825520B8(first, hole, bottom, &value, predicate);
}
} // namespace std

template void std::_Sort<T *, int, P>(T *first, T *last, int ideal, P predicate);
