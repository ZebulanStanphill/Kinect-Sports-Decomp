// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_824544E8 is a placeholder for the game's 48-byte element type, which
// derives from a polymorphic base (Base_824544E8) and adds two ints, a VMX
// vector, a float and a byte. Building with /QVMXReserve (in objects.json)
// makes the copy use the same vector registers as the original.
//
// The base and the element each had a vtable with one slot, and the linker
// merged the two into lbl_821B9BC8, but the copy constructor still stores both
// pointers. Declaring the vtable once in each of two namespaces gives the
// compiler two symbols with the same name, so it builds and stores both.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. This vector's reserve stays a call to fn_82454890. The specializations
// call it, operator delete and std::_Xlength_error by the names that C units
// use.

#include <vector>

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float f[4];
    unsigned int u[4];
} __vector4;

namespace BaseVtable {
extern "C" void *lbl_821B9BC8[];
}

namespace ElementVtable {
extern "C" void *lbl_821B9BC8[];
}

struct Base_824544E8 {
    Base_824544E8(const Base_824544E8 &other);
    void **vtable;
    int unk4;
};

inline Base_824544E8::Base_824544E8(const Base_824544E8 &other)
{
    vtable = BaseVtable::lbl_821B9BC8;
    unk4 = other.unk4;
}

struct Element_824544E8 : Base_824544E8 {
    Element_824544E8(const Element_824544E8 &other);
    int unk8;
    int unkC;
    __vector4 unk10;
    float unk20;
    unsigned char unk24;
};

inline Element_824544E8::Element_824544E8(const Element_824544E8 &other)
    : Base_824544E8(other)
{
    vtable = ElementVtable::lbl_821B9BC8;
    unk8 = other.unk8;
    unkC = other.unkC;
    unk10 = other.unk10;
    unk20 = other.unk20;
    unk24 = other.unk24;
}

typedef Element_824544E8 T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_82454890(std::vector<T> *self, unsigned int count);
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
    fn_82454890(this, count);
}

template void std::vector<T>::push_back(const T &);
