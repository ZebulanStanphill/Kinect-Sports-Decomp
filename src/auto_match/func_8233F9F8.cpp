// std::_Unguarded_partition over (priority, value) pairs ordered by descending priority, from
// Visual C++ 2010's <algorithm>, instantiated out of line for std::_Sort (fn_8233F530); std::_Med3
// stays a call to fn_8233FED8, which does not take the predicate.

#include <algorithm>
#include <utility>

typedef std::pair<float, int> Entry_8233F530;

struct Greater_8233F530 {
    bool operator()(Entry_8233F530 left, Entry_8233F530 right) const
    {
        return left.first > right.first;
    }
};

typedef Entry_8233F530 T;
typedef Greater_8233F530 P;

extern "C" void fn_8233FED8(T *first, T *mid, T *last);

template <> __forceinline void std::_Med3(T *first, T *mid, T *last, P)
{
    fn_8233FED8(first, mid, last);
}

template std::pair<T *, T *> std::_Unguarded_partition<T *, P>(T *first, T *last, P predicate);
