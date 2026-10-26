// std::vector<T>::reserve from Visual C++ 2010's <vector>. Element_828912E0 is
// a placeholder for the game's 8-byte element type, whose copy constructor is
// fn_828B5580 and which has a destructor. Other units call this function by its
// fn_ name, so it is a wrapper around the member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. std::allocator<T>::allocate stays a call to fn_828E62F0 and
// std::_Destroy_range a call to fn_8288E5C8. The specializations call them,
// operator delete and std::_Xlength_error by the names that C units use.

#include <vector>

struct Element_828912E0 {
    Element_828912E0();
    Element_828912E0(const Element_828912E0 &other);
    ~Element_828912E0();
    Element_828912E0 &operator=(const Element_828912E0 &other);
    int data[2];
};

extern "C" void fn_828B5580(Element_828912E0 *self, const Element_828912E0 *other);

inline Element_828912E0::Element_828912E0(const Element_828912E0 &other)
{
    fn_828B5580(this, &other);
}

typedef Element_828912E0 T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_8288E5C8(T *first, T *last, std::allocator<T> *al);
T *fn_828E62F0(std::allocator<T> *self, unsigned int count);
}

template <> __forceinline T *std::allocator<T>::allocate(size_type count)
{
    return fn_828E62F0(this, count);
}

template <> __forceinline void std::_Destroy_range(T *first, T *last, std::allocator<T> &al)
{
    fn_8288E5C8(first, last, &al);
}

template <> void std::allocator<T>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

extern "C" void fn_828912E0(std::vector<T> *self, unsigned int count)
{
    self->reserve(count);
}
