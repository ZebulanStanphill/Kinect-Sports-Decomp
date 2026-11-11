// Reserve space for one element; the original payload type is unknown.

#include <vector>

struct Element_8239DC80 {
    int data[1];
};

typedef Element_8239DC80 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_8239DD40(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_8239DD40(this, count);
}

struct Access_8239DC80 : std::vector<T> {
    using std::vector<T>::_Reserve;
};

extern "C" void fn_8239DC80(std::vector<T> *self)
{
    static_cast<Access_8239DC80 *>(self)->_Reserve(1);
}

