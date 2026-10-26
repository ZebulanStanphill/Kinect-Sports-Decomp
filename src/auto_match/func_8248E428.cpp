// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_8248E428 is a placeholder for the game's 12-byte element type, which
// holds a Pointer_8248E428 and a float. Pointer_8248E428 is a placeholder for
// an 8-byte reference-counting pointer, whose copy constructor is fn_82365BD8.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. This vector's reserve stays a call to fn_8248E7E0. The specializations
// call it, operator delete and std::_Xlength_error by the names that C units
// use.

#include <vector>

struct Pointer_8248E428 {
    Pointer_8248E428(const Pointer_8248E428 &other);
    void *ptr;
    void *rep;
};

extern "C" void fn_82365BD8(Pointer_8248E428 *self, const Pointer_8248E428 *other);

inline Pointer_8248E428::Pointer_8248E428(const Pointer_8248E428 &other)
{
    fn_82365BD8(this, &other);
}

struct Element_8248E428 {
    Pointer_8248E428 unk0;
    float unk8;
};

typedef Element_8248E428 T;

extern "C" {
void fn_8248E7E0(std::vector<T> *self, unsigned int count);
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
}

template <> void std::allocator<T>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_8248E7E0(this, count);
}

template void std::vector<T>::push_back(const T &);
