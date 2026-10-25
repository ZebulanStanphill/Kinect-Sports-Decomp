// std::deque<T>::_Growmap from Visual C++ 2010's <deque>. It grows the map of
// pointers to the deque's blocks. Element_828B34A8 is a placeholder for the
// game's 72-byte element type.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The map allocator's allocate stays a call to fn_8288BD00; it, operator
// delete and std::_Xlength_error keep the names that C units use.

// <deque> calls std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <deque>
#undef _Xlength_error

struct Element_828B34A8 {
    int data[18];
};

typedef Element_828B34A8 T;

extern "C" {
void fn_8265CA20(void *ptr);
T **fn_8288BD00(std::allocator<T *> *self, unsigned int count);
}

template <> __forceinline T **std::allocator<T *>::allocate(size_type count)
{
    return fn_8288BD00(this, count);
}

template <> void std::allocator<T *>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template void std::deque<T>::_Growmap(size_type);
