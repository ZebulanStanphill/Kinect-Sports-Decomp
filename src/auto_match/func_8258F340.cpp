// std::vector<T>::operator= from Visual C++ 2010's <vector>. Element_8258F340
// is a placeholder for the game's 36-byte element type, which holds a vtable
// pointer, a std::string and a 32-bit value; its vtable suggests the class is
// R1::Soundscape::AudioVariant_c. Its copy constructor is fn_82292780 and its
// assignment operator fn_822924C0.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. That limit would also inline stdext::exception::_Raise, which the
// original calls, so it is marked noinline while <exception> is read. The
// allocator is inlined into this function, so std::_Allocate is specialized to
// call operator new by its fn_ name. std::_Destroy_range stays a call to
// fn_822933E8, which takes only the two pointers (link-time code generation
// dropped the allocator argument). The element's copy constructor and
// assignment operator, fn_822933E8, operator new, operator delete and
// std::_Xlength_error keep the names that C units use.

#define _Raise __declspec(noinline) _Raise
#include <exception>
#undef _Raise
#include <vector>

struct Element_8258F340 {
    Element_8258F340(const Element_8258F340 &other);
    ~Element_8258F340();
    Element_8258F340 &operator=(const Element_8258F340 &other);
    int data[9];
};

extern "C" {
void fn_82292780(Element_8258F340 *self, const Element_8258F340 *other);
void fn_822924C0(Element_8258F340 *self, const Element_8258F340 *other);
}

inline Element_8258F340::Element_8258F340(const Element_8258F340 &other)
{
    fn_82292780(this, &other);
}

inline Element_8258F340 &Element_8258F340::operator=(const Element_8258F340 &other)
{
    fn_822924C0(this, &other);
    return *this;
}

typedef Element_8258F340 T;

extern "C" {
void *fn_8265C9E0(unsigned int size);
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_822933E8(T *first, T *last);
}

template <> __forceinline T *std::_Allocate(size_t count, T *)
{
    void *ptr = 0;
    if (count <= 0)
        count = 0;
    else if ((size_t)-1 / sizeof(T) < count || (ptr = fn_8265C9E0(count * sizeof(T))) == 0)
        stdext::bad_alloc(0)._Raise();
    return (T *)ptr;
}

template <> __forceinline T *std::allocator<T>::allocate(size_type count)
{
    return std::_Allocate(count, (T *)0);
}

template <> void std::allocator<T>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> __forceinline void std::_Destroy_range(T *first, T *last, std::allocator<T> &)
{
    fn_822933E8(first, last);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template std::vector<T> &std::vector<T>::operator=(const std::vector<T> &);
