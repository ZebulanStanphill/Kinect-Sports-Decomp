// std::deque<T>::_Growmap from Visual C++ 2010's <deque>, for a deque of a
// 4-byte element (four per block). Element_825AD308 is a placeholder for the
// game's element type. Its callers are the deque's push_back and push_front,
// func_825AC9E8.cpp and func_8287D048.cpp, which call it as the member. The
// map allocation goes through std::_Allocate (fn_82E21DB0), and it, operator
// delete and std::_Xlength_error keep the names that C units use.

// <deque> calls std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <deque>
#undef _Xlength_error

struct Element_825AD308 {
    int data;
};

typedef Element_825AD308 T;

extern "C" {
void fn_8265CA20(void *ptr);
T **fn_82E21DB0(unsigned int count, T **);
}

template <> __forceinline T **std::_Allocate(size_t count, T **)
{
    return fn_82E21DB0(count, (T **)0);
}

template <> void std::allocator<T *>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template void std::deque<T>::_Growmap(size_type);
