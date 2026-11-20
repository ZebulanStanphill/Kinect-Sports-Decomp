// std::_Unguarded_partition over 24-byte entries ordered by (major, minor), from Visual C++
// 2010's <algorithm>, instantiated out of line for std::_Sort (fn_825510B0); std::_Med3 stays a
// call to fn_82551D80, which does not take the predicate.

#include <algorithm>

struct Entry_825510B0 {
    int v[4];  /* 0x00 */
    int major; /* 0x10 */
    int minor; /* 0x14 */
};

struct Less_825510B0 {
    bool operator()(const Entry_825510B0 &left, const Entry_825510B0 &right) const
    {
        if (left.major == right.major) {
            return left.minor < right.minor;
        }
        return left.major < right.major;
    }
};

typedef Entry_825510B0 T;
typedef Less_825510B0 P;

extern "C" void fn_82551D80(T *first, T *mid, T *last);

template <> __forceinline void std::_Med3(T *first, T *mid, T *last, P)
{
    fn_82551D80(first, mid, last);
}

template std::pair<T *, T *> std::_Unguarded_partition<T *, P>(T *first, T *last, P predicate);
