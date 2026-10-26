// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>.
// Element_82302B40 is a placeholder for the game's 64-byte element type, which
// holds a std::string, an int, a VMX vector, two floats and an int. Building
// with /QVMXReserve (in objects.json) makes the copy use the same vector
// registers as the original.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. The std::string copy constructor stays a call to fn_8223B688 and this
// vector's reserve a call to fn_82302DA8. The specializations call them,
// operator delete and std::_Xlength_error by the names that C units use.

// The std::string copy constructor has to be specialized after <xstring>
// declares it and before <string> uses it.
#include <xstring>

extern "C" void fn_8223B688(std::string *self, const std::string *other);

template <> __forceinline std::basic_string<char>::basic_string(const std::string &other)
{
    fn_8223B688(this, &other);
}

#include <string>
#include <vector>

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float f[4];
    unsigned int u[4];
} __vector4;

struct Element_82302B40 {
    std::string unk0;
    int unk1C;
    __vector4 unk20;
    float unk30;
    float unk34;
    int unk38;
};

typedef Element_82302B40 T;

extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_82302DA8(std::vector<T> *self, unsigned int count);
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
    fn_82302DA8(this, count);
}

template void std::vector<T>::push_back(const T &);
