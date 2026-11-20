// std::_Unguarded_partition over shared_ptr elements, from Visual C++ 2010's <algorithm>,
// instantiated out of line for std::_Sort (fn_8248EA08). The predicate takes both elements by
// value (fn_8248E2C0); std::_Med3 (fn_8248F288) and the element's copy constructor (fn_82365BD8)
// stay calls.

#include <algorithm>
#include <memory>

struct Item_8248ECD0;

typedef std::tr1::shared_ptr<Item_8248ECD0> T;

// fn_82365BD8, out of line.
template <> T::shared_ptr(const T &other);

extern "C" bool fn_8248E2C0(T left, T right);

struct Predicate_8248ECD0 {
    bool operator()(const T &left, const T &right) const
    {
        return fn_8248E2C0(left, right);
    }
};

typedef Predicate_8248ECD0 P;

extern "C" void fn_8248F288(T *first, T *mid, T *last, P predicate);

template <> __forceinline void std::_Med3(T *first, T *mid, T *last, P predicate)
{
    fn_8248F288(first, mid, last, predicate);
}

template std::pair<T *, T *> std::_Unguarded_partition<T *, P>(T *first, T *last, P predicate);
