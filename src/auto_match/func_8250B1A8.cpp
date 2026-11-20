// std::_Unguarded_partition over 0x14-byte entries ordered by ascending priority, from Visual C++
// 2010's <algorithm>, instantiated out of line for std::_Sort (fn_8250ACB8); std::_Med3 stays a
// call to fn_8250BD30, which does not take the predicate.

#include <algorithm>

struct Entry_8250BE90 {
    int unk0;       /* 0x00 */
    int unk4;       /* 0x04 */
    float priority; /* 0x08 */
    int unkC;       /* 0x0c */
    int unk10;      /* 0x10 */
};

struct Predicate_8250ACB8 {
    bool operator()(const Entry_8250BE90 &left, const Entry_8250BE90 &right) const
    {
        return left.priority < right.priority;
    }
};

typedef Entry_8250BE90 T;
typedef Predicate_8250ACB8 P;

extern "C" void fn_8250BD30(T *first, T *mid, T *last);

template <> __forceinline void std::_Med3(T *first, T *mid, T *last, P)
{
    fn_8250BD30(first, mid, last);
}

template std::pair<T *, T *> std::_Unguarded_partition<T *, P>(T *first, T *last, P predicate);
