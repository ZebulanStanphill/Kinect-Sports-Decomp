// std::vector<T>::reserve from Visual C++ 2010's <vector>. Element_828DC990 is
// a placeholder for the game's 52-byte element type. Other units call this
// function by its fn_ name, so it is a wrapper around the member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. std::allocator<T>::allocate, std::_Uninit_move and std::_Destroy_range
// stay calls to fn_828D5200, fn_828DC838 and fn_828BF248. They, operator
// delete and std::_Xlength_error keep the names that C units use.

#include <vector>

struct Element_828DC990 {
    int data[13];
};

typedef Element_828DC990 T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
T *fn_828D5200(std::allocator<T> *self, unsigned int count);
T *fn_828DC838(T *first, T *last, T *dest, std::allocator<T> *al, T *, std::_Nonscalar_ptr_iterator_tag);
void fn_828BF248(T *first, T *last, std::allocator<T> *al, std::_Nonscalar_ptr_iterator_tag);
}

template <> __forceinline T *std::allocator<T>::allocate(size_type count)
{
    return fn_828D5200(this, count);
}

template <> void std::allocator<T>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline T *std::_Uninit_move(T *first, T *last, T *dest, std::allocator<T> &al, T *ptr,
                                               std::_Nonscalar_ptr_iterator_tag tag)
{
    return fn_828DC838(first, last, dest, &al, ptr, tag);
}

template <> __forceinline void std::_Destroy_range(T *first, T *last, std::allocator<T> &al,
                                                   std::_Nonscalar_ptr_iterator_tag tag)
{
    fn_828BF248(first, last, &al, tag);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

extern "C" void fn_828DC990(std::vector<T> *self, unsigned int count)
{
    self->reserve(count);
}
