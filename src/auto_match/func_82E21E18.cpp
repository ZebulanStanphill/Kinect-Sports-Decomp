// std::deque<T>::_Growmap from Visual C++ 2010's <deque>, for a 28-byte element
// (max_size 0x9249249). Element_82E21E18 is a placeholder for the game's type.
// The map allocation is the folded std::_Allocate (fn_82E21DB0, called as
// (count, 0)); it, operator delete and std::_Xlength_error keep the names that
// C units use.

// <deque> calls std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <deque>
#undef _Xlength_error

struct Element_82E21E18 {
    int data[7];
};

typedef Element_82E21E18 T;

extern "C" {
void fn_8265CA20(void *ptr);
T **fn_82E21DB0(unsigned int count, T **hint);
}

template <> __forceinline T **std::allocator<T *>::allocate(size_type count)
{
    return fn_82E21DB0(count, 0);
}

template <> void std::allocator<T *>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template void std::deque<T>::_Growmap(size_type);
