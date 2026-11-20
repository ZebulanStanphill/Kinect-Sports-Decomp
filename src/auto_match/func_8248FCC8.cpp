// std::_Sort over ints in their natural order, from Visual C++ 2010's <algorithm>.
// std::_Unguarded_partition (fn_8248FEA8) and _Adjust_heap (fn_82490210) stay out of line;
// make_heap, sort_heap and the insertion sort are inlined.

#include <algorithm>

extern "C" void fn_82490210(int *first, int hole, int bottom, int *value);

namespace std
{
// fn_8248FEA8, out of line.
template <> pair<int *, int *> _Unguarded_partition<int *>(int *first, int *last);

template <> __forceinline void _Adjust_heap<int *, int, int>(int *first, int hole, int bottom, int &&value)
{
    fn_82490210(first, hole, bottom, &value);
}
} // namespace std

template void std::_Sort<int *, int>(int *first, int *last, int ideal);
