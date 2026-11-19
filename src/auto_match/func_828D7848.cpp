#include <algorithm>
#include <deque>

typedef std::deque<unsigned int>::iterator::_Unchecked_type Iterator_828D7848;
typedef std::pair<Iterator_828D7848, Iterator_828D7848> Range_828D7848;

namespace std
{
// fn_828D6150, out of line.
template <>
Range_828D7848 _Unguarded_partition<Iterator_828D7848>(Iterator_828D7848 first, Iterator_828D7848 last);
} // namespace std

// std::_Make_heap
extern "C" void fn_828D6860(Iterator_828D7848 first, Iterator_828D7848 last, int *distanceType,
                            unsigned int *valueType);
// std::_Sort_heap
extern "C" void fn_828D70A0(Iterator_828D7848 first, Iterator_828D7848 last);
// std::_Insertion_sort1
extern "C" void fn_828D55B8(Iterator_828D7848 first, Iterator_828D7848 last, unsigned int *valueType);

// std::_Sort: introsort over a deque of unsigned ints.
extern "C" void fn_828D7848(Iterator_828D7848 first, Iterator_828D7848 last, int ideal)
{
    int count;

    for (; 32 < (count = last - first) && 0 < ideal;) {
        Range_828D7848 mid = std::_Unguarded_partition(first, last);

        ideal /= 2, ideal += ideal / 2;
        if (mid.first - first < last - mid.second) {
            fn_828D7848(first, mid.first, ideal);
            first = mid.second;
        } else {
            fn_828D7848(mid.second, last, ideal);
            last = mid.first;
        }
    }
    if (32 < count) {
        if (1 < last - first) {
            fn_828D6860(first, last, 0, 0);
        }
        fn_828D70A0(first, last);
    } else if (1 < count) {
        fn_828D55B8(first, last, 0);
    }
}
