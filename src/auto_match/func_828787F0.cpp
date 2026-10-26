// std::vector<T>::reserve from Visual C++ 2010's <vector>. Element_828787F0 is
// a placeholder for the game's 48-byte element type, whose copy constructor is
// fn_82878358 and which has a destructor. Other units call this function by its
// fn_ name, so it is a wrapper around the member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. std::_Allocate stays a call to fn_82878160 and std::_Destroy_range a
// call to fn_8286A1E0, which is the overload that takes the iterator tag; the
// one without it is inlined. The specializations call them, operator delete
// and std::_Xlength_error by the names that C units use.

#include <vector>

struct Element_828787F0 {
    Element_828787F0();
    Element_828787F0(const Element_828787F0 &other);
    ~Element_828787F0();
    Element_828787F0 &operator=(const Element_828787F0 &other);
    int data[12];
};

extern "C" void fn_82878358(Element_828787F0 *self, const Element_828787F0 *other);

inline Element_828787F0::Element_828787F0(const Element_828787F0 &other)
{
    fn_82878358(this, &other);
}

typedef Element_828787F0 T;

extern "C" {
void fn_8265CA20(void *ptr);
void fn_8286A1E0(T *first, T *last, std::allocator<T> *al, std::_Nonscalar_ptr_iterator_tag tag);
T *fn_82878160(unsigned int count, T *);
__declspec(noreturn) void fn_82F622A8(const char *message);
}

template <> __forceinline T *std::_Allocate(size_t count, T *)
{
    return fn_82878160(count, (T *)0);
}

template <> __forceinline void std::_Destroy_range(T *first, T *last, std::allocator<T> &al,
                                                   std::_Nonscalar_ptr_iterator_tag tag)
{
    fn_8286A1E0(first, last, &al, tag);
}

template <> void std::allocator<T>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

extern "C" void fn_828787F0(std::vector<T> *self, unsigned int count)
{
    self->reserve(count);
}
