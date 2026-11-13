// allocator<Value_8250F498>::construct: placement copy of { __vector4, std::vector<32-byte element> } with
// the VC10 vector copy constructor inlined; fn_8250F2B0 is the vector's out-of-line _Buy.
#include <vector>

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

struct Element_8250F498 {
    __int64 data[4];
};

typedef Element_8250F498 T;

extern "C" unsigned char fn_8250F2B0(std::vector<T> *self, unsigned int count);

template <> __forceinline bool std::vector<T>::_Buy(size_type count)
{
    return fn_8250F2B0(this, count) != 0;
}

struct Value_8250F498 {
    __vector4 v;
    std::vector<T> list;
};

extern "C" void fn_8250F498(Value_8250F498 *p, const Value_8250F498 *src)
{
    ::new ((void *)p) Value_8250F498(*src);
}
