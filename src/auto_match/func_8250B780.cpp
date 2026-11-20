// std::_Unguarded_partition over 20-byte entries, from Visual C++ 2010's <algorithm>, instantiated
// out of line for std::_Sort (fn_8250AE88). The predicate's comparison (fn_8250A688) stays a call,
// as does std::_Med3 (fn_8250BFE0).

#include <algorithm>

struct Entry_8250AE88 {
    int unk0;  /* 0x00 */
    float x;   /* 0x04 */
    float y;   /* 0x08 */
    int unkC;  /* 0x0c */
    int unk10; /* 0x10 */
};

extern "C" bool fn_8250A688(const Entry_8250AE88 *left, const Entry_8250AE88 *right);

struct Predicate_8250AE88 {
    // The original keeps the body out of line.
    bool operator()(const Entry_8250AE88 &left, const Entry_8250AE88 &right) const
    {
        return fn_8250A688(&left, &right);
    }
};

typedef Entry_8250AE88 T;
typedef Predicate_8250AE88 P;

extern "C" void fn_8250BFE0(T *first, T *mid, T *last, P predicate);

template <> __forceinline void std::_Med3(T *first, T *mid, T *last, P predicate)
{
    fn_8250BFE0(first, mid, last, predicate);
}

template std::pair<T *, T *> std::_Unguarded_partition<T *, P>(T *first, T *last, P predicate);
