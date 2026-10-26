// std::vector<T>::push_back(T &&) from Visual C++ 2010's <vector>.
// Element_823B8608 is a placeholder for the game's 16-byte element type, which
// holds a 64-bit value and a std::tr1::shared_ptr. Pointee_823B8608 is a
// placeholder for the type the shared_ptr points to. Visual C++ 2010 does not
// generate move constructors, so the element declares one that moves the
// shared_ptr.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call this vector's reserve (fn_823B90E8),
// operator delete and std::_Xlength_error by the names that C units use.

#include <memory>
#include <vector>

struct Pointee_823B8608;

struct Element_823B8608 {
    Element_823B8608(Element_823B8608 &&other);
    unsigned __int64 unk0;
    std::tr1::shared_ptr<Pointee_823B8608> ptr;
};

inline Element_823B8608::Element_823B8608(Element_823B8608 &&other)
    : unk0(other.unk0), ptr(std::move(other.ptr))
{
}

typedef Element_823B8608 T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_823B90E8(std::vector<T> *self, unsigned int count);
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
    fn_823B90E8(this, count);
}

template void std::vector<T>::push_back(T &&);
