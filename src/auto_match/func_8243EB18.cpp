// std::_Sort over 0x5c-byte entries ordered by descending key, then ascending id, from Visual C++
// 2010's <algorithm>. std::_Unguarded_partition (fn_8243F850), _Adjust_heap (fn_824406C0) and the
// insertion sort (fn_8243FCD8) stay out of line; make_heap and sort_heap are inlined.

#include <algorithm>

struct Entry_824406C0 {
    int id;           /* 0x00 */
    int pad[16];      /* 0x04 */
    unsigned int key; /* 0x44 */
    int valid;        /* 0x48 */
    int rest[4];      /* 0x4c */
};

struct Predicate_8243EB18 {
    bool operator()(const Entry_824406C0 &left, const Entry_824406C0 &right) const
    {
        return left.key > right.key || (left.key == right.key && left.id < right.id);
    }
};

typedef Entry_824406C0 T;
typedef Predicate_8243EB18 P;

extern "C" void fn_824406C0(T *first, int hole, int bottom, T *value, P predicate);
extern "C" void fn_8243FCD8(T *first, T *last, P predicate);

namespace std
{
// fn_8243F850, out of line.
template <> pair<T *, T *> _Unguarded_partition<T *, P>(T *first, T *last, P predicate);

template <>
__forceinline void _Adjust_heap<T *, int, T, P>(T *first, int hole, int bottom, T &&value, P predicate)
{
    fn_824406C0(first, hole, bottom, &value, predicate);
}

template <> __forceinline void _Insertion_sort<T *, P>(T *first, T *last, P predicate)
{
    fn_8243FCD8(first, last, predicate);
}
} // namespace std

template void std::_Sort<T *, int, P>(T *first, T *last, int ideal, P predicate);
