// std::_Adjust_heap from Visual C++ 2010's <algorithm>, for the unchecked
// iterators of a std::deque<unsigned int> ordered by operator<: percolates the
// hole down to a leaf, then calls std::_Push_heap (fn_828D50C0) to move the
// value up to its place.
#include <algorithm>
#include <deque>

typedef std::deque<unsigned int>::iterator::_Unchecked_type Iterator_828D5D10;

template void std::_Adjust_heap(Iterator_828D5D10, int, int, unsigned int &&);
