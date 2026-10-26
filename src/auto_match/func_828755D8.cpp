// std::vector<T>::reserve from Visual C++ 2010's <vector>. Element_828755D8 is
// a placeholder for the game's 112-byte element type, which has a copy
// constructor and a destructor. Neither is called here: the library helpers
// that call them stay out of line. Other units call this function by its fn_
// name, so it is a wrapper around the member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. std::_Allocate stays a call to fn_82875048, std::_Uninitialized_move a
// call to fn_82875580 and std::_Destroy_range a call to fn_82875118. The
// specializations call them, operator delete and std::_Xlength_error by the
// names that C units use.

#include <vector>

struct Element_828755D8 {
    Element_828755D8();
    Element_828755D8(const Element_828755D8 &other);
    ~Element_828755D8();
    Element_828755D8 &operator=(const Element_828755D8 &other);
    int data[28];
};

typedef Element_828755D8 T;

extern "C" {
void fn_8265CA20(void *ptr);
T *fn_82875048(unsigned int count, T *);
void fn_82875118(T *first, T *last, std::allocator<T> *al);
T *fn_82875580(T *first, T *last, T *dest, std::allocator<T> *al);
__declspec(noreturn) void fn_82F622A8(const char *message);
}

template <> __forceinline T *std::_Allocate(size_t count, T *)
{
    return fn_82875048(count, (T *)0);
}

template <> __forceinline T *std::_Uninitialized_move(T *first, T *last, T *dest,
                                                      std::allocator<T> &al)
{
    return fn_82875580(first, last, dest, &al);
}

template <> __forceinline void std::_Destroy_range(T *first, T *last, std::allocator<T> &al)
{
    fn_82875118(first, last, &al);
}

template <> void std::allocator<T>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

extern "C" void fn_828755D8(std::vector<T> *self, unsigned int count)
{
    self->reserve(count);
}
