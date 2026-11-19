// std::_Unguarded_partition over 12-byte items ordered by their second word, from Visual C++
// 2010's <algorithm>, instantiated out of line for std::_Sort (fn_82835008); std::_Median stays a
// call to fn_828348F0.

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

extern "C" void fn_828348F0(T *first, T *mid, T *last, P predicate);

template <> __forceinline void std::_Median(T *first, T *mid, T *last, P predicate)
{
    fn_828348F0(first, mid, last, predicate);
}

template std::pair<T *, T *> std::_Unguarded_partition<T *, P>(T *first, T *last, P predicate);
