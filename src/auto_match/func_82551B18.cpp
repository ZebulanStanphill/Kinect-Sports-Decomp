// std::_Unguarded_partition over (value, priority) entries ordered by ascending priority, from
// Visual C++ 2010's <algorithm>, instantiated out of line for std::_Sort (fn_82551260);
// std::_Med3 stays a call to fn_82552038.

#include <algorithm>

struct Entry_82551260 {
    unsigned int value; /* 0x0 */
    int priority;       /* 0x4 */
};

struct Less_82551260 {
    bool operator()(const Entry_82551260 &left, const Entry_82551260 &right) const
    {
        return left.priority < right.priority;
    }
};

typedef Entry_82551260 T;
typedef Less_82551260 P;

extern "C" void fn_82552038(T *first, T *mid, T *last);

template <> __forceinline void std::_Med3(T *first, T *mid, T *last, P predicate)
{
    fn_82552038(first, mid, last);
}

template std::pair<T *, T *> std::_Unguarded_partition<T *, P>(T *first, T *last, P predicate);
