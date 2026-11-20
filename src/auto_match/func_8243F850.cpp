// std::_Unguarded_partition over 0x5c-byte entries ordered by descending key, then ascending id,
// from Visual C++ 2010's <algorithm>, instantiated out of line for std::_Sort (fn_8243EB18);
// std::_Med3 stays a call to fn_82440568, which does not take the predicate.

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

extern "C" void fn_82440568(T *first, T *mid, T *last);

template <> __forceinline void std::_Med3(T *first, T *mid, T *last, P)
{
    fn_82440568(first, mid, last);
}

template std::pair<T *, T *> std::_Unguarded_partition<T *, P>(T *first, T *last, P predicate);
