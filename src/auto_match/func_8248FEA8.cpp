// std::_Unguarded_partition over ints in their natural order, from Visual C++ 2010's <algorithm>,
// instantiated out of line for std::_Sort; std::_Median stays a call to fn_82490070.

#include <algorithm>

extern "C" void fn_82490070(int *first, int *mid, int *last);

template <> __forceinline void std::_Median(int *first, int *mid, int *last)
{
    fn_82490070(first, mid, last);
}

template std::pair<int *, int *> std::_Unguarded_partition<int *>(int *first, int *last);
