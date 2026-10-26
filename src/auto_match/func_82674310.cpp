// std::vector<T>::reserve from Visual C++ 2010's <vector>. T is
// std::tr1::shared_ptr<Pointee_82674310>; Pointee_82674310 is a placeholder for
// the type the pointer owns. Other units call this function by its fn_ name, so
// it is a wrapper around the member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. std::_Allocate stays a call to fn_822CB2D8, std::_Uninit_move a call to
// fn_826741F0 and std::_Destroy_range a call to fn_82231540; the last two are
// the overloads that take the iterator tag. The specializations call them,
// operator delete and std::_Xlength_error by the names that C units use.

#include <memory>
#include <vector>

struct Pointee_82674310;

typedef std::tr1::shared_ptr<Pointee_82674310> T;

extern "C" {
void fn_82231540(T *first, T *last, std::allocator<T> *al, std::_Nonscalar_ptr_iterator_tag tag);
T *fn_822CB2D8(unsigned int count, T *);
void fn_8265CA20(void *ptr);
T *fn_826741F0(T *first, T *last, T *dest, std::allocator<T> *al, T *,
               std::_Nonscalar_ptr_iterator_tag tag);
__declspec(noreturn) void fn_82F622A8(const char *message);
}

template <> __forceinline T *std::_Allocate(size_t count, T *)
{
    return fn_822CB2D8(count, (T *)0);
}

template <> __forceinline T *std::_Uninit_move(T *first, T *last, T *dest, std::allocator<T> &al,
                                               T *, std::_Nonscalar_ptr_iterator_tag tag)
{
    return fn_826741F0(first, last, dest, &al, (T *)0, tag);
}

template <> __forceinline void std::_Destroy_range(T *first, T *last, std::allocator<T> &al,
                                                   std::_Nonscalar_ptr_iterator_tag tag)
{
    fn_82231540(first, last, &al, tag);
}

template <> void std::allocator<T>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

extern "C" void fn_82674310(std::vector<T> *self, unsigned int count)
{
    self->reserve(count);
}
