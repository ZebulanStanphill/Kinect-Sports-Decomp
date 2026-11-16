#include <deque>

typedef std::deque<unsigned int>::iterator::_Unchecked_type Iterator_828D70A0;
extern "C" void fn_828D5D10(Iterator_828D70A0 first, Iterator_828D70A0 last, Iterator_828D70A0 output,
                            unsigned int *value, int *distanceType);

extern "C" void fn_828D70A0(Iterator_828D70A0 first, Iterator_828D70A0 last)
{
    while (last - first > 1) {
        unsigned int value = *(last - 1);
        fn_828D5D10(first, last - 1, last - 1, &value, 0);
        --last;
    }
}
