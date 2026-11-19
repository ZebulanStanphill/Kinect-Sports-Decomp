// std::_Sort over 12-byte items ordered by their second word, from Visual C++ 2010's <algorithm>.
// The item and predicate types are those of std::_Unguarded_partition (fn_82834A58), which stays
// out of line; the heap and insertion sorts are calls as well.

#include <algorithm>

struct Item_82834A58 {
    int first;        /* 0x0 */
    unsigned int key; /* 0x4 */
    int extra;        /* 0x8 */
};

struct Predicate_82834A58 {
    bool operator()(const Item_82834A58 &left, const Item_82834A58 &right) const
    {
        return left.key < right.key;
    }
};

typedef Item_82834A58 T;
typedef Predicate_82834A58 P;
typedef std::pair<T *, T *> Range_82835008;

namespace std
{
// fn_82834A58, out of line.
template <> Range_82835008 _Unguarded_partition<T *, P>(T *first, T *last, P predicate);
} // namespace std

// std::_Make_heap
extern "C" void fn_828344D0(T *first, T *last, P predicate, int *distanceType, T *valueType);
// std::_Sort_heap
extern "C" void fn_82834D10(T *first, T *last, P predicate);
// std::_Insertion_sort1
extern "C" void fn_82834548(T *first, T *last, P predicate, T *valueType);

// std::_Sort: introsort.
extern "C" void fn_82835008(T *first, T *last, int ideal, P predicate)
{
    int count;

    for (; 32 < (count = last - first) && 0 < ideal;) {
        Range_82835008 mid = std::_Unguarded_partition(first, last, predicate);

        ideal /= 2, ideal += ideal / 2;
        if (mid.first - first < last - mid.second) {
            fn_82835008(first, mid.first, ideal, predicate);
            first = mid.second;
        } else {
            fn_82835008(mid.second, last, ideal, predicate);
            last = mid.first;
        }
    }
    if (32 < count) {
        if (1 < last - first) {
            fn_828344D0(first, last, predicate, 0, 0);
        }
        fn_82834D10(first, last, predicate);
    } else if (1 < count) {
        fn_82834548(first, last, predicate, 0);
    }
}
