// std::_Sort over 12-byte elements ordered by their leading float key (operator<), from Visual C++
// 2010's <algorithm>. std::_Unguarded_partition (fn_8249EDB0), _Adjust_heap (fn_8249F338) and the
// insertion sort (fn_8249F160) stay out of line; make_heap and sort_heap are inlined.

#include <algorithm>

struct Element_8249F338 {
    float key;           /* 0x0 */
    unsigned int second; /* 0x4 */
    unsigned int third;  /* 0x8 */

    bool operator<(const Element_8249F338 &other) const
    {
        return key < other.key;
    }
};

typedef Element_8249F338 T;

extern "C" void fn_8249F338(T *first, int hole, int bottom, T *value);
extern "C" void fn_8249F160(T *first, T *last);

namespace std
{
// fn_8249EDB0, out of line.
template <> pair<T *, T *> _Unguarded_partition<T *>(T *first, T *last);

template <> __forceinline void _Adjust_heap<T *, int, T>(T *first, int hole, int bottom, T &&value)
{
    fn_8249F338(first, hole, bottom, &value);
}

template <> __forceinline void _Insertion_sort<T *>(T *first, T *last)
{
    fn_8249F160(first, last);
}
} // namespace std

template void std::_Sort<T *, int>(T *first, T *last, int ideal);
