// std::_Push_heap from Visual C++ 2010's <algorithm>, for the unchecked
// iterators of a std::deque<unsigned int> ordered by operator<: percolates
// the hole up to the place of the value and stores it.
#include <algorithm>
#include <deque>

typedef std::deque<unsigned int>::iterator::_Unchecked_type Iterator_828D5D10;

template void std::_Push_heap(Iterator_828D5D10, int, int, unsigned int &&);
