// std::vector<T>::reserve from Visual C++ 2010's <vector>. Element_82878698 is
// a placeholder for the game's 44-byte element type, whose copy constructor is
// fn_828783B8. Other units call this function by its fn_ name, so it is a
// wrapper around the member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Allocate (fn_828780F8),
// std::_Destroy_range (fn_828782A8), operator delete and std::_Xlength_error by
// the names that C units use.

#include <vector>

struct Element_82878698 {
    Element_82878698();
    Element_82878698(const Element_82878698 &other);
    ~Element_82878698();
    Element_82878698 &operator=(const Element_82878698 &other);
    int data[11];
};

extern "C" void fn_828783B8(Element_82878698 *self, const Element_82878698 *other);

inline Element_82878698::Element_82878698(const Element_82878698 &other)
{
    fn_828783B8(this, &other);
}

typedef Element_82878698 T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
T *fn_828780F8(unsigned int count, T *);
void fn_828782A8(T *first, T *last, std::allocator<T> *al);
}

template <> __forceinline T *std::_Allocate(size_t count, T *)
{
    return fn_828780F8(count, (T *)0);
}

template <> __forceinline void std::_Destroy_range(T *first, T *last, std::allocator<T> &al)
{
    fn_828782A8(first, last, &al);
}

template <> void std::allocator<T>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

extern "C" void fn_82878698(std::vector<T> *self, unsigned int count)
{
    self->reserve(count);
}
