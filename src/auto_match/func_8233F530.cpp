// std::_Sort over (priority, value) pairs ordered by descending priority, from Visual C++ 2010's
// <algorithm>. std::_Unguarded_partition (fn_8233F9F8), _Adjust_heap (fn_8233FFA0) and the
// insertion sort (fn_8233FD78) stay out of line; make_heap and sort_heap are inlined.

#include <algorithm>
#include <utility>

typedef std::pair<float, int> Entry_8233F530;

struct Greater_8233F530 {
    bool operator()(Entry_8233F530 left, Entry_8233F530 right) const
    {
        return left.first > right.first;
    }
};

typedef Entry_8233F530 T;
typedef Greater_8233F530 P;

extern "C" void fn_8233FFA0(T *first, int hole, int bottom, T *value, P predicate);
extern "C" void fn_8233FD78(T *first, T *last, P predicate);

namespace std
{
// fn_8233F9F8, out of line.
template <> pair<T *, T *> _Unguarded_partition<T *, P>(T *first, T *last, P predicate);

template <>
__forceinline void _Adjust_heap<T *, int, T, P>(T *first, int hole, int bottom, T &&value, P predicate)
{
    fn_8233FFA0(first, hole, bottom, &value, predicate);
}

template <> __forceinline void _Insertion_sort<T *, P>(T *first, T *last, P predicate)
{
    fn_8233FD78(first, last, predicate);
}
} // namespace std

template void std::_Sort<T *, int, P>(T *first, T *last, int ideal, P predicate);
