// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_8256D590 is a placeholder for the game's 12-byte element type. It
// starts with Ref_8256D590, a placeholder for an 8-byte reference like
// std::tr1::shared_ptr whose copy constructor is fn_82365BD8, and ends with a
// 32-bit value. The element's own copy constructor is the implicit one.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The specializations call this vector's reserve (fn_8256D8D0),
// operator delete and std::_Xlength_error by the names that C units use.

#include <vector>

struct Ref_8256D590 {
    Ref_8256D590(const Ref_8256D590 &other);
    ~Ref_8256D590();
    void *ptr;
    void *rep;
};

extern "C" void fn_82365BD8(Ref_8256D590 *self, const Ref_8256D590 *other);

inline Ref_8256D590::Ref_8256D590(const Ref_8256D590 &other)
{
    fn_82365BD8(this, &other);
}

struct Element_8256D590 {
    Ref_8256D590 ref;
    int unk8;
};

typedef Element_8256D590 T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_8256D8D0(std::vector<T> *self, unsigned int count);
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
    fn_8256D8D0(this, count);
}

template void std::vector<T>::push_back(const T &);
