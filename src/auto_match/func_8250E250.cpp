#include <vector>

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
unsigned char fn_82424AD0(std::vector<float> *self, unsigned int count);
}

template <> void std::vector<float>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline bool std::vector<float>::_Buy(size_type count)
{
    return fn_82424AD0(this, count) != 0;
}

template std::vector<float>::vector(const std::vector<float> &);
