// std::vector<T>::push_back(const T &) inlined into a wrapper (func_82892F98.cpp shape).
// Element_82883298 is copied byte by byte (lbzu/stbu loop), so it is an 8-byte
// struct of bytes here; its _Reserve unit (func_82883298.cpp) matches with either layout.

#include <vector>

struct Element_82883298 {
    unsigned char data[8];
};

typedef Element_82883298 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_82881C00(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_82881C00(this, count);
}

struct Vec_82883C18 : public std::vector<T> {
    __forceinline void PushBack(const T *val)
    {
        if (_Inside(val)) {
            int idx = val - _Myfirst;
            if (_Mylast == _Myend) {
                _Reserve(1);
            }
            if (_Mylast != 0) {
                *_Mylast = *(_Myfirst + idx);
            }
        } else {
            if (_Mylast == _Myend) {
                _Reserve(1);
            }
            if (_Mylast != 0) {
                *_Mylast = *(val);
            }
        }
        ++_Mylast;
    }
};


extern "C" void fn_82883C18(Vec_82883C18 *self, const T *val)
{
    self->PushBack(val);
}
