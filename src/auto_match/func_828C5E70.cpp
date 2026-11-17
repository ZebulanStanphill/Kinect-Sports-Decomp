#include <deque>

struct Node_828C5E70 {
    char padding[8];
    unsigned int priority;
};

struct Predicate_828C5E70 {};

typedef std::deque<Node_828C5E70 *>::iterator::_Unchecked_type Iterator_828C5E70;
extern "C" void fn_828C5068(Iterator_828C5E70 first, Iterator_828C5E70 last, Iterator_828C5E70 output,
                            Node_828C5E70 **value, Predicate_828C5E70 predicate, int *distanceType);

extern "C" void fn_828C5E70(Iterator_828C5E70 first, Iterator_828C5E70 last, Predicate_828C5E70 predicate)
{
    while (last - first > 1) {
        Node_828C5E70 *value = *(last - 1);
        fn_828C5068(first, last - 1, last - 1, &value, predicate, 0);
        --last;
    }
}
