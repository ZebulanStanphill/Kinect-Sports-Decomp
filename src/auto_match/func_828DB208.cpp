// std::vector<T>::push_back(const T &) inlined into a wrapper (shape of
// func_828D3C88.cpp). Element_828DAFD8 is a placeholder for the game's
// 8-byte element type, copied by an inlined
// helper that takes pointers (a placement-new T(...) numbers the index
// registers the other way round).

#include <vector>

struct Element_828DAFD8 {
    int data[2];
};

typedef Element_828DAFD8 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

// reserve is defined in its own unit (func_828DAFD8).
template <> void std::vector<T>::reserve(size_type);

static __forceinline void Copy_828DB208(T *dst, const T *src)
{
    *dst = *src;
}

struct Vec_828DB208 : public std::vector<T> {
    __forceinline void PushBack(const T *val)
    {
        if (_Inside(val)) {
            size_type idx = val - _Myfirst;
            if (_Mylast == _Myend) {
                _Reserve(1);
            }
            if (_Mylast != 0) {
                Copy_828DB208(_Mylast, _Myfirst + idx);
            }
            ++_Mylast;
        } else {
            if (_Mylast == _Myend) {
                _Reserve(1);
            }
            if (_Mylast != 0) {
                Copy_828DB208(_Mylast, val);
            }
            ++_Mylast;
        }
    }
};

extern "C" void fn_828DB208(Vec_828DB208 *self, const T *val)
{
    self->PushBack(val);
}
