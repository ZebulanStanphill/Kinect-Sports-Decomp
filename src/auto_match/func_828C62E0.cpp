#include <algorithm>
#include <deque>

struct Node_828C62E0 {
    char padding[8];
    unsigned int priority;
};

struct Predicate_828C62E0 {};

typedef std::deque<Node_828C62E0 *>::iterator::_Unchecked_type Iterator_828C62E0;
typedef std::pair<Iterator_828C62E0, Iterator_828C62E0> Range_828C62E0;

namespace std
{
// fn_828C52A0, out of line.
template <>
Range_828C62E0 _Unguarded_partition<Iterator_828C62E0, Predicate_828C62E0>(Iterator_828C62E0 first,
                                                                           Iterator_828C62E0 last,
                                                                           Predicate_828C62E0 predicate);
} // namespace std

// std::_Make_heap
extern "C" void fn_828C59F0(Iterator_828C62E0 first, Iterator_828C62E0 last, Predicate_828C62E0 predicate,
                            int *distanceType, Node_828C62E0 **valueType);
// std::_Sort_heap
extern "C" void fn_828C5E70(Iterator_828C62E0 first, Iterator_828C62E0 last, Predicate_828C62E0 predicate);
// std::_Insertion_sort1
extern "C" void fn_828C4CA0(Iterator_828C62E0 first, Iterator_828C62E0 last, Predicate_828C62E0 predicate,
                            Node_828C62E0 **valueType);

// std::_Sort: introsort over a deque of node pointers.
extern "C" void fn_828C62E0(Iterator_828C62E0 first, Iterator_828C62E0 last, int ideal,
                            Predicate_828C62E0 predicate)
{
    int count;

    for (; 32 < (count = last - first) && 0 < ideal;) {
        Range_828C62E0 mid = std::_Unguarded_partition(first, last, predicate);

        ideal /= 2, ideal += ideal / 2;
        if (mid.first - first < last - mid.second) {
            fn_828C62E0(first, mid.first, ideal, predicate);
            first = mid.second;
        } else {
            fn_828C62E0(mid.second, last, ideal, predicate);
            last = mid.first;
        }
    }
    if (32 < count) {
        if (1 < last - first) {
            fn_828C59F0(first, last, predicate, 0, 0);
        }
        fn_828C5E70(first, last, predicate);
    } else if (1 < count) {
        fn_828C4CA0(first, last, predicate, 0);
    }
}
