// Game code: a constructor. Object_824C8960 is a placeholder for the game's
// class, which holds two ints, a std::tr1::function, a std::vector of VMX
// vectors and three more ints. The constructor copies the first four members
// from its arguments and sets the last three to 0, 1 and 0. The function's
// signature is a placeholder too. Building with /QVMXReserve (in objects.json)
// makes the vector copy use the same vector registers as the original.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline the
// std::tr1::function and std::vector copy constructors from Visual C++ 2010's
// <functional> and <vector> as the original does. It also dropped the unused
// pointer argument of std::_Allocate (fn_82386E68). The specializations call
// std::_Allocate, operator delete and std::_Xlength_error by the names that C
// units use.

#include <functional>
#include <vector>

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float f[4];
    unsigned int u[4];
} __vector4;

typedef __vector4 T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
T *fn_82386E68(unsigned int count);
}

template <> __forceinline T *std::_Allocate(size_t count, T *)
{
    return fn_82386E68(count);
}

template <> void std::allocator<T>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

class Object_824C8960 {
public:
    Object_824C8960(int unk0, int unk4, const std::tr1::function<void ()> &unk8,
                    const std::vector<T> &unk20);

private:
    int unk0;
    int unk4;
    std::tr1::function<void ()> unk8;
    std::vector<T> unk20;
    int unk30;
    int unk34;
    int unk38;
};

Object_824C8960::Object_824C8960(int unk0, int unk4, const std::tr1::function<void ()> &unk8,
                                 const std::vector<T> &unk20)
    : unk0(unk0), unk4(unk4), unk8(unk8), unk20(unk20), unk30(0), unk34(1), unk38(0)
{
}
