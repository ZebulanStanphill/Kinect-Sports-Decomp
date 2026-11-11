// Reserve space for one element; the original payload type is unknown.

#include <vector>

struct Element_8225C238 {
    int data[1];
};

typedef Element_8225C238 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_826286B0(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_826286B0(this, count);
}

struct Access_8225C238 : std::vector<T> {
    using std::vector<T>::_Reserve;
};

extern "C" void fn_8225C238(std::vector<T> *self)
{
    static_cast<Access_8225C238 *>(self)->_Reserve(1);
}

