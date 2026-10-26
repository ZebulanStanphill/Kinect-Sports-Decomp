// Game code: resizes a std::vector of Element_8243D958 to 8 elements, with
// std::vector<T>::resize(size_type) from Visual C++ 2010's <vector> inlined.
// Element_8243D958 is a placeholder for the game's 12-byte element type, whose
// default constructor sets its fields to 0, 0 and -1. The function keeps its
// fn_ name.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. This vector's reserve stays a call to fn_82512FD8. The specializations
// call it, operator delete and std::_Xlength_error by the names that C units
// use.

#include <vector>

struct Element_8243D958 {
    Element_8243D958();
    int unk0;
    int unk4;
    int unk8;
};

inline Element_8243D958::Element_8243D958()
    : unk0(0), unk4(0), unk8(-1)
{
}

typedef Element_8243D958 T;

extern "C" {
void fn_82512FD8(std::vector<T> *self, unsigned int count);
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
    fn_82512FD8(this, count);
}

extern "C" void fn_8243D958(std::vector<T> *self)
{
    self->resize(8);
}
