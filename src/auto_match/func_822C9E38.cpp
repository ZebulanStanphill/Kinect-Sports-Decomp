// Reserve space for one element; the original payload type is unknown.

#include <vector>

struct Element_822C9E38 {
    int data[2];
};

typedef Element_822C9E38 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_8232CA90(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_8232CA90(this, count);
}

struct Access_822C9E38 : std::vector<T> {
    using std::vector<T>::_Reserve;
};

extern "C" void fn_822C9E38(std::vector<T> *self)
{
    static_cast<Access_822C9E38 *>(self)->_Reserve(1);
}

