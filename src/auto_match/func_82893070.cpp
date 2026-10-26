// std::vector<T>::reserve from Visual C++ 2010's <vector>. Element_82893070 is
// a placeholder for the game's 32-byte element type, which has a move
// constructor and a destructor. Other units call this function by its fn_ name,
// so it is a wrapper around the member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. std::allocator<T>::allocate, std::_Uninit_move and std::_Destroy_range
// stay calls to fn_8288BF40, fn_828903B8 and fn_82890328. They, operator
// delete and std::_Xlength_error keep the names that C units use.

#include <vector>

struct Element_82893070 {
    Element_82893070(Element_82893070 &&other);
    ~Element_82893070();
    int data[8];
};

typedef Element_82893070 T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
T *fn_8288BF40(std::allocator<T> *self, unsigned int count);
T *fn_828903B8(T *first, T *last, T *dest, std::allocator<T> *al, T *, std::_Nonscalar_ptr_iterator_tag);
void fn_82890328(T *first, T *last, std::allocator<T> *al, std::_Nonscalar_ptr_iterator_tag);
}

template <> __forceinline T *std::allocator<T>::allocate(size_type count)
{
    return fn_8288BF40(this, count);
}

template <> void std::allocator<T>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline T *std::_Uninit_move(T *first, T *last, T *dest, std::allocator<T> &al, T *,
                                               std::_Nonscalar_ptr_iterator_tag tag)
{
    return fn_828903B8(first, last, dest, &al, 0, tag);
}

template <> __forceinline void std::_Destroy_range(T *first, T *last, std::allocator<T> &al,
                                                   std::_Nonscalar_ptr_iterator_tag tag)
{
    fn_82890328(first, last, &al, tag);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

extern "C" void fn_82893070(std::vector<T> *self, unsigned int count)
{
    self->reserve(count);
}
