
#include <vector>

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;

typedef __vector4 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);

}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> void std::vector<T>::reserve(size_type);

struct Access_823867D0 : std::vector<T> {
    using std::vector<T>::_Reserve;
};

extern "C" void fn_823867D0(std::vector<T> *self)
{
    static_cast<Access_823867D0 *>(self)->_Reserve(1);
}

