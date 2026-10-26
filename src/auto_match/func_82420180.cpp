// std::vector<T>::reserve from Visual C++ 2010's <vector>. Element_82420180 is
// a placeholder for the game's 24-byte element type, which holds an int and a
// polymorphic member (Derived_82420180, derived from Base_82420180).
//
// The base and the derived class each had a vtable with one slot, and the
// linker merged the two into lbl_821B9BC8, but the copy constructor and
// destructor still store both pointers. Declaring the vtable once in each of
// two namespaces gives the compiler two symbols with the same name, so it
// builds and stores both.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. It did not inline stdext::exception::_Raise, which <exception> defines
// inline, so that is declared noinline while the header is read. The
// specializations call operator new, operator delete and std::_Xlength_error
// by the names that C units use.

#define _Raise __declspec(noinline) _Raise
#include <exception>
#undef _Raise

#include <vector>

namespace BaseVtable {
extern "C" void *lbl_821B9BC8[];
}

namespace DerivedVtable {
extern "C" void *lbl_821B9BC8[];
}

struct Base_82420180 {
    Base_82420180(const Base_82420180 &other);
    ~Base_82420180();
    void **vtable;
    int unk4;
};

inline Base_82420180::Base_82420180(const Base_82420180 &other)
{
    vtable = BaseVtable::lbl_821B9BC8;
    unk4 = other.unk4;
}

inline Base_82420180::~Base_82420180()
{
    vtable = BaseVtable::lbl_821B9BC8;
}

struct Derived_82420180 : Base_82420180 {
    Derived_82420180(const Derived_82420180 &other);
    ~Derived_82420180();
    int unk8;
    int unkC;
    float unk10;
};

inline Derived_82420180::Derived_82420180(const Derived_82420180 &other)
    : Base_82420180(other)
{
    vtable = DerivedVtable::lbl_821B9BC8;
    unk8 = other.unk8;
    unkC = other.unkC;
    unk10 = other.unk10;
}

inline Derived_82420180::~Derived_82420180()
{
    vtable = DerivedVtable::lbl_821B9BC8;
}

struct Element_82420180 {
    int unk0;
    Derived_82420180 unk4;
};

typedef Element_82420180 T;

extern "C" {
void *fn_8265C9E0(unsigned int size);
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
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

template void std::vector<T>::reserve(size_type);
