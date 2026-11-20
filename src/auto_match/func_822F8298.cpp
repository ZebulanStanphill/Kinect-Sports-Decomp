// std::_Sort over (item, priority) pairs ordered by descending priority, from Visual C++ 2010's
// <algorithm>. std::_Unguarded_partition (fn_822F86F0), _Adjust_heap (fn_822F8F38) and the
// insertion sort (fn_822F8A68) stay out of line; make_heap and sort_heap are inlined.

#include <algorithm>
#include <utility>

struct Item_822F8298;

typedef std::pair<Item_822F8298 *, float> Entry_822F8298;

struct Greater_822F8298 {
    bool operator()(const Entry_822F8298 &left, const Entry_822F8298 &right) const
    {
        return left.second > right.second;
    }
};

typedef Entry_822F8298 T;
typedef Greater_822F8298 P;

extern "C" void fn_822F8F38(T *first, int hole, int bottom, T *value, P predicate);
extern "C" void fn_822F8A68(T *first, T *last, P predicate);

namespace std
{
// fn_822F86F0, out of line.
template <> pair<T *, T *> _Unguarded_partition<T *, P>(T *first, T *last, P predicate);

template <>
__forceinline void _Adjust_heap<T *, int, T, P>(T *first, int hole, int bottom, T &&value, P predicate)
{
    fn_822F8F38(first, hole, bottom, &value, predicate);
}

template <> __forceinline void _Insertion_sort<T *, P>(T *first, T *last, P predicate)
{
    fn_822F8A68(first, last, predicate);
}
} // namespace std

template void std::_Sort<T *, int, P>(T *first, T *last, int ideal, P predicate);
