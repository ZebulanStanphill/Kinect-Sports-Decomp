// std::_Push_heap from Visual C++ 2010's <algorithm>, for the unchecked
// iterators of a std::deque of pointers ordered by the unsigned key at +8:
// percolates the hole up to the place of the value and stores it. The element
// and predicate placeholders are those of std::_Make_heap (fn_828C59F0).
#include <algorithm>
#include <deque>

struct Item_828C59F0 {
    char pad0[8];
    unsigned int key; /* 0x8 */
};

struct Less_828C59F0 {
    bool operator()(const Item_828C59F0 *left, const Item_828C59F0 *right) const
    {
        return left->key < right->key;
    }
};

typedef std::deque<Item_828C59F0 *> Deque_828C59F0;
typedef Deque_828C59F0::iterator::_Unchecked_type Iterator_828C59F0;

template void std::_Push_heap(Iterator_828C59F0, int, int, Item_828C59F0 *&&, Less_828C59F0);
