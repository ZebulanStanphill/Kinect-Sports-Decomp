// std::_Unguarded_partition over pointers to ranges ordered by position (a range is less than another
// when it ends at or before the other's start), from Visual C++ 2010's <algorithm>, instantiated out of
// line for std::_Sort; std::_Median stays a call to fn_8282EDA0.

#include <algorithm>

struct Range_8282EE40 {
    int unknown0;
    unsigned int size; /* 0x4 */
    int unknown8;
    unsigned int offset; /* 0xc */
};

struct RangeLess_8282EE40 {
    bool operator()(const Range_8282EE40 *left, const Range_8282EE40 *right) const
    {
        return left->offset + left->size <= right->offset;
    }
};

extern "C" void fn_8282EDA0(Range_8282EE40 **first, Range_8282EE40 **mid, Range_8282EE40 **last,
                            RangeLess_8282EE40 pred);

template <>
__forceinline void std::_Median(Range_8282EE40 **first, Range_8282EE40 **mid, Range_8282EE40 **last,
                                RangeLess_8282EE40 pred)
{
    fn_8282EDA0(first, mid, last, pred);
}

template std::pair<Range_8282EE40 **, Range_8282EE40 **>
std::_Unguarded_partition<Range_8282EE40 **, RangeLess_8282EE40>(Range_8282EE40 **first,
                                                                 Range_8282EE40 **last,
                                                                 RangeLess_8282EE40 pred);
