// The destructor of a global std::deque<Elem_825303A0 *> (Visual C++ 2010's
// <deque>), registered with atexit by fn_83125070 through fn_8313F588.
// Elem_825303A0 is a placeholder for the pointed-to type; the deque only holds
// pointers. operator delete keeps the fn_ name that C units use.

#include <deque>

struct Elem_825303A0;

typedef Elem_825303A0 *T;

extern "C" {
void fn_8265CA20(void *ptr);
extern std::deque<T> lbl_832967A0;
}

template <> __forceinline void std::allocator<T>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void std::allocator<T *>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void std::allocator<std::_Container_proxy>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

extern "C" void fn_825303A0(void)
{
    lbl_832967A0.~deque();
}
