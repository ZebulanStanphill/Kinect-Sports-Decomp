// std::_Unguarded_partition over 20-byte entries ordered by a weighted sum, from Visual C++ 2010's
// <algorithm>, instantiated out of line for std::_Sort (fn_822DB878). The predicate carries two
// weight pointers and its operator() (fn_822D9E28) stays a call, as does std::_Med3 (fn_822DCA58).

#include <algorithm>

struct Entry_822DB878 {
    int id;      /* 0x00 */
    float first; /* 0x04 */
    float base;  /* 0x08 */
    int unknown0C;
    float second; /* 0x10 */
};

struct Predicate_822DB878;

extern "C" bool fn_822D9E28(const Predicate_822DB878 *self, const Entry_822DB878 *left,
                            const Entry_822DB878 *right);

struct Predicate_822DB878 {
    const float *firstWeight;  /* 0x0 */
    const float *secondWeight; /* 0x4 */

    // The original keeps the body out of line.
    bool operator()(const Entry_822DB878 &left, const Entry_822DB878 &right) const
    {
        return fn_822D9E28(this, &left, &right);
    }
};

typedef Entry_822DB878 T;
typedef Predicate_822DB878 P;

extern "C" void fn_822DCA58(T *first, T *mid, T *last, P predicate);

template <> __forceinline void std::_Med3(T *first, T *mid, T *last, P predicate)
{
    fn_822DCA58(first, mid, last, predicate);
}

template std::pair<T *, T *> std::_Unguarded_partition<T *, P>(T *first, T *last, P predicate);
