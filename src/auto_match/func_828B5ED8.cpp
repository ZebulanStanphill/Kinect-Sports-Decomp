// std::vector<T>::push_back(const T &) inlined into a wrapper (shape of
// func_828D3C88.cpp). Element_828B5C10 is a placeholder for the game's
// 4-byte element type, copied by an inlined
// helper that takes pointers (a placement-new T(...) numbers the index
// registers the other way round).

#include <vector>

struct Element_828B5C10 {
    unsigned short data[2];
};

typedef Element_828B5C10 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_828B5948(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_828B5948(this, count);
}

static __forceinline void Copy_828B5ED8(T *dst, const T *src)
{
    *dst = *src;
}

struct Vec_828B5ED8 : public std::vector<T> {
    __forceinline void PushBack(const T *val)
    {
        if (_Inside(val)) {
            size_type idx = val - _Myfirst;
            if (_Mylast == _Myend) {
                _Reserve(1);
            }
            if (_Mylast != 0) {
                Copy_828B5ED8(_Mylast, _Myfirst + idx);
            }
            ++_Mylast;
        } else {
            if (_Mylast == _Myend) {
                _Reserve(1);
            }
            if (_Mylast != 0) {
                Copy_828B5ED8(_Mylast, val);
            }
            ++_Mylast;
        }
    }
};

extern "C" void fn_828B5ED8(Vec_828B5ED8 *self, const T *val)
{
    self->PushBack(val);
}
