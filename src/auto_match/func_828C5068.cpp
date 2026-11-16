#include <deque>

struct Node_828C5068 {
    char pad[8];
    unsigned int priority;
};

struct Predicate_828C5068 {};

typedef std::deque<Node_828C5068 *>::iterator::_Unchecked_type Iterator_828C5068;
extern "C" void fn_828C4EA8(Iterator_828C5068, int, int, Node_828C5068 **, Predicate_828C5068);

extern "C" void fn_828C5068(Iterator_828C5068 first, Iterator_828C5068 last, Iterator_828C5068 output,
                            Node_828C5068 **value, Predicate_828C5068 predicate)
{
    *output = *first;
    fn_828C4EA8(first, 0, last - first, value, predicate);
}
