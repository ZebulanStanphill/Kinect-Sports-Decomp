// std::vector<T>::push_back(const T &) inlined into a wrapper (shape of
// func_828D3C88.cpp / func_822C9D68.c). Element_828C4060 is a placeholder for the
// game's 4-byte element type; fn_828B6330 is its copy constructor,
// called directly (a placement-new T(...) gives the index add operands swapped).

#include <vector>

struct Element_828C4060 {
    int data[1];
};

typedef Element_828C4060 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_828C3F60(std::vector<T> *self, unsigned int count);
void fn_828B6330(T *self, const T *other);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_828C3F60(this, count);
}

struct Vec_828C4110 : public std::vector<T> {
    __forceinline void PushBack(const T *val)
    {
        if (_Inside(val)) {
            int idx = val - _Myfirst;
            if (_Mylast == _Myend) {
                _Reserve(1);
            }
            if (_Mylast != 0) {
                fn_828B6330(_Mylast, _Myfirst + idx);
            }
        } else {
            if (_Mylast == _Myend) {
                _Reserve(1);
            }
            if (_Mylast != 0) {
                fn_828B6330(_Mylast, val);
            }
        }
        ++_Mylast;
    }
};

extern "C" void fn_828C4110(Vec_828C4110 *self, const T *val)
{
    self->PushBack(val);
}
