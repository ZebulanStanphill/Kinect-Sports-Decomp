// Game code: a constructor. Object_82510100 is a placeholder for the game's
// class, which derives from a base with the vtable lbl_821C240C and holds an
// int, a std::tr1::function and a std::vector of Element_82510100, a
// placeholder for a 16-byte element type. The constructor copies the members
// from its arguments and sorts the vector with std::sort and an empty
// predicate (Less_82510100). The function's signature is a placeholder too.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline the
// std::tr1::function and std::vector copy constructors from Visual C++ 2010's
// <functional> and <vector> as the original does. It did not inline
// stdext::exception::_Raise, which <exception> defines inline, so that is
// declared noinline while the header is read. std::_Sort stays a call to
// fn_82510438. The specializations call it, operator new, operator delete and
// std::_Xlength_error by the names that C units use.

#define _Raise __declspec(noinline) _Raise
#include <exception>
#undef _Raise

#include <algorithm>
#include <functional>
#include <vector>

struct Element_82510100 {
    int data[4];
};

struct Less_82510100 {
    bool operator()(const Element_82510100 &left, const Element_82510100 &right) const;
};

typedef Element_82510100 T;

extern "C" {
void *fn_8265C9E0(unsigned int size);
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_82510438(T *first, T *last, int ideal, Less_82510100 pred);
extern void *lbl_821C240C[];
}

template <> __forceinline T *std::_Allocate(size_t count, T *)
{
    void *ptr = 0;
    if (count <= 0)
        count = 0;
    else if ((size_t)-1 / sizeof(T) < count
             || (ptr = fn_8265C9E0(count * sizeof(T))) == 0)
        stdext::bad_alloc(0)._Raise();
    return (T *)ptr;
}

template <> void std::allocator<T>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::_Sort(T *first, T *last, int ideal, Less_82510100 pred)
{
    fn_82510438(first, last, ideal, pred);
}

struct Base_82510100 {
    Base_82510100();
    void **vtable;
};

inline Base_82510100::Base_82510100()
{
    vtable = lbl_821C240C;
}

class Object_82510100 : public Base_82510100 {
public:
    Object_82510100(int unk4, const std::tr1::function<void ()> &unk8, const std::vector<T> &unk20);

private:
    int unk4;
    std::tr1::function<void ()> unk8;
    std::vector<T> unk20;
};

Object_82510100::Object_82510100(int unk4, const std::tr1::function<void ()> &unk8,
                                 const std::vector<T> &unk20)
    : unk4(unk4), unk8(unk8), unk20(unk20)
{
    std::sort(this->unk20.begin(), this->unk20.end(), Less_82510100());
}
