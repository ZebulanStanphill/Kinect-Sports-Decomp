// std::_Sort over shared_ptr elements, from Visual C++ 2010's <algorithm>, with std::make_heap
// inlined. std::_Unguarded_partition (fn_8248ECD0), _Adjust_heap (fn_8248F390), _Sort_heap
// (fn_8248F0A0) and the loop of _Insertion_sort1 (fn_8248F158) stay calls; the item, predicate
// and copy constructor are those of fn_8248ECD0.

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

// std::tr1::_Ref_count_base::_Decref
extern "C" void fn_822315A0(std::tr1::_Ref_count_base *rep);
extern "C" void fn_8248F390(T *first, int hole, int bottom, T *value, P predicate);
extern "C" void fn_8248F0A0(T *first, T *last, P predicate);
extern "C" void fn_8248F158(T *first, T *last, P *predicate);

template <> __forceinline void std::tr1::_Ptr_base<Item_8248ECD0>::_Decref()
{
    if (_Rep != 0) {
        fn_822315A0(_Rep);
    }
}

namespace std
{
// fn_8248ECD0, out of line.
template <> pair<T *, T *> _Unguarded_partition<T *, P>(T *first, T *last, P predicate);

template <>
__forceinline void _Adjust_heap<T *, int, T, P>(T *first, int hole, int bottom, T &&value, P predicate)
{
    fn_8248F390(first, hole, bottom, &value, predicate);
}

template <> __forceinline void _Sort_heap<T *, P>(T *first, T *last, P predicate)
{
    fn_8248F0A0(first, last, predicate);
}

// The original keeps the test of _Insertion_sort1 here and calls its loop.
template <> __forceinline void _Insertion_sort1<T *, P, T>(T *first, T *last, P predicate, T *)
{
    if (first != last) {
        fn_8248F158(first, last, &predicate);
    }
}
} // namespace std

template void std::_Sort<T *, int, P>(T *first, T *last, int ideal, P predicate);
