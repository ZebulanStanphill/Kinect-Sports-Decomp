// std::vector<T>::reserve from Visual C++ 2010's <vector>. Element_8266DFD8 is
// a placeholder for the game's 12-byte element type, whose copy constructor is
// fn_8266CB08. Other units call this function by its fn_ name, so it is a
// wrapper around the member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call std::_Allocate (fn_8266C8F0),
// std::_Destroy_range (fn_8266DB60), operator delete and std::_Xlength_error by
// the names that C units use.

#include <vector>

struct Element_8266DFD8 {
    Element_8266DFD8();
    Element_8266DFD8(const Element_8266DFD8 &other);
    ~Element_8266DFD8();
    Element_8266DFD8 &operator=(const Element_8266DFD8 &other);
    int data[3];
};

extern "C" void fn_8266CB08(Element_8266DFD8 *self, const Element_8266DFD8 *other);

inline Element_8266DFD8::Element_8266DFD8(const Element_8266DFD8 &other)
{
    fn_8266CB08(this, &other);
}

typedef Element_8266DFD8 T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
T *fn_8266C8F0(unsigned int count, T *);
void fn_8266DB60(T *first, T *last, std::allocator<T> *al);
}

template <> __forceinline T *std::_Allocate(size_t count, T *)
{
    return fn_8266C8F0(count, (T *)0);
}

template <> __forceinline void std::_Destroy_range(T *first, T *last, std::allocator<T> &al)
{
    fn_8266DB60(first, last, &al);
}

template <> void std::allocator<T>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

extern "C" void fn_8266DFD8(std::vector<T> *self, unsigned int count)
{
    self->reserve(count);
}
