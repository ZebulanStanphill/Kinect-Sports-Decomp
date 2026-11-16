#include <deque>

typedef std::deque<unsigned int>::iterator::_Unchecked_type Iterator_828D5D10;
extern "C" void fn_828D5808(Iterator_828D5D10, int, int, unsigned int *);

extern "C" void fn_828D5D10(Iterator_828D5D10 first, Iterator_828D5D10 last, Iterator_828D5D10 output,
                            unsigned int *value, int *distanceType)
{
    *output = *first;
    fn_828D5808(first, 0, last - first, value);
}
