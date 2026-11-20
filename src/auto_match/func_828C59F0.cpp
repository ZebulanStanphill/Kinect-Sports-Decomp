// std::_Make_heap from Visual C++ 2010's <algorithm>, for the unchecked
// iterators of a std::deque of pointers. The predicate orders the pointed-to
// items by the unsigned key at +8 (std::_Adjust_heap, fn_828C4EA8, has it
// inline). Item_828C59F0 and Less_828C59F0 stand for the element and the
// predicate until their real names are known.
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

template void std::_Make_heap(Iterator_828C59F0, Iterator_828C59F0, Less_828C59F0, int *, Item_828C59F0 **);
