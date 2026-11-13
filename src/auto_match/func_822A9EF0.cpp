// std::vector<T>::_Reserve(1) from Visual C++ 2010's <vector>, specialised by
// link-time code generation for push_back's count of 1. Element_822A9EF0 is a
// placeholder for the game's 36-byte element type.

#include <vector>

struct Element_822A9EF0 {
    int data[9];
};

typedef Element_822A9EF0 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_822932E8(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_822932E8(this, count);
}

// _Reserve is protected
struct Access : std::vector<T> {
    using std::vector<T>::_Reserve;
};

extern "C" void fn_822A9EF0(std::vector<T> *self)
{
    static_cast<Access *>(self)->_Reserve(1);
}
