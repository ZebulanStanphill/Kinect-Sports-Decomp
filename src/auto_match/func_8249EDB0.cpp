// std::_Unguarded_partition over 12-byte elements ordered by their leading float key (operator<),
// from Visual C++ 2010's <algorithm>, instantiated out of line for std::_Sort (fn_8249EC08);
// std::_Med3 stays a call to fn_8249F240.

#include <algorithm>

struct Element_8249F338 {
    float key;           /* 0x0 */
    unsigned int second; /* 0x4 */
    unsigned int third;  /* 0x8 */

    bool operator<(const Element_8249F338 &other) const
    {
        return key < other.key;
    }
};

typedef Element_8249F338 T;

extern "C" void fn_8249F240(T *first, T *mid, T *last);

template <> __forceinline void std::_Med3(T *first, T *mid, T *last)
{
    fn_8249F240(first, mid, last);
}

template std::pair<T *, T *> std::_Unguarded_partition<T *>(T *first, T *last);
