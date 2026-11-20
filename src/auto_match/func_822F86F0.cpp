// std::_Unguarded_partition over (item, priority) pairs ordered by descending priority, from
// Visual C++ 2010's <algorithm>, instantiated out of line for std::_Sort (fn_822F8298); std::_Med3
// stays a call to fn_822F8E58, which does not take the predicate.

#include <algorithm>
#include <utility>

struct Item_822F8298;

typedef std::pair<Item_822F8298 *, float> Entry_822F8298;

struct Greater_822F8298 {
    bool operator()(const Entry_822F8298 &left, const Entry_822F8298 &right) const
    {
        return left.second > right.second;
    }
};

typedef Entry_822F8298 T;
typedef Greater_822F8298 P;

extern "C" void fn_822F8E58(T *first, T *mid, T *last);

template <> __forceinline void std::_Med3(T *first, T *mid, T *last, P)
{
    fn_822F8E58(first, mid, last);
}

template std::pair<T *, T *> std::_Unguarded_partition<T *, P>(T *first, T *last, P predicate);
