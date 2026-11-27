// std::_Median (the median-of-nine pivot choice of std::sort) from Visual C++ 2010's <algorithm>,
// instantiated out of line for a range of unsigned 64-bit values.

#include <algorithm>

template void std::_Median<unsigned __int64 *>(unsigned __int64 *first, unsigned __int64 *mid,
                                               unsigned __int64 *last);
