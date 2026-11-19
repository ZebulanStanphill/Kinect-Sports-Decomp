// std::_Unguarded_partition over a deque of unsigned ints, from Visual C++ 2010's <algorithm>,
// instantiated out of line for std::_Sort (fn_828D7848). std::_Median (fn_828D54B8) and the
// iterator's operator* (fn_825AEE38) stay calls.

#include <algorithm>
#include <deque>

typedef std::deque<unsigned int>::iterator::_Unchecked_type Iterator_828D6150;

template std::pair<Iterator_828D6150, Iterator_828D6150>
std::_Unguarded_partition<Iterator_828D6150>(Iterator_828D6150 first, Iterator_828D6150 last);
