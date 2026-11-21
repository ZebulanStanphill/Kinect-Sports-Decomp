// std::_Sort over chars in their natural order, from Visual C++ 2010's <algorithm>.
// std::_Unguarded_partition (fn_822DCD18) and _Adjust_heap (fn_822DD580) stay out of line;
// make_heap, sort_heap and the insertion sort are inlined.

#include <algorithm>

extern "C" void fn_822DD580(char *first, int hole, int bottom, char *value);

namespace std
{
// fn_822DCD18, out of line.
template <> pair<char *, char *> _Unguarded_partition<char *>(char *first, char *last);

template <>
__forceinline void _Adjust_heap<char *, int, char>(char *first, int hole, int bottom, char &&value)
{
    fn_822DD580(first, hole, bottom, &value);
}
} // namespace std

template void std::_Sort<char *, int>(char *first, char *last, int ideal);
