// std::vector<T>::push_back(const T &) inlined into a wrapper (shape of
// func_828D3C88.cpp / func_822C9D68.c). Element_82892330 is a placeholder for the
// game's 8-byte element type; fn_828B5580 is its copy constructor,
// called directly (a placement-new T(...) gives the index add operands swapped).

#include <vector>

struct Element_82892330 {
    int data[2];
};

typedef Element_82892330 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_828912E0(std::vector<T> *self, unsigned int count);
void fn_828B5580(T *self, const T *other);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_828912E0(this, count);
}

struct Vec_82892F98 : public std::vector<T> {
    __forceinline void PushBack(const T *val)
    {
        if (_Inside(val)) {
            int idx = val - _Myfirst;
            if (_Mylast == _Myend) {
                _Reserve(1);
            }
            if (_Mylast != 0) {
                fn_828B5580(_Mylast, _Myfirst + idx);
            }
        } else {
            if (_Mylast == _Myend) {
                _Reserve(1);
            }
            if (_Mylast != 0) {
                fn_828B5580(_Mylast, val);
            }
        }
        ++_Mylast;
    }
};

extern "C" void fn_82892F98(Vec_82892F98 *self, const T *val)
{
    self->PushBack(val);
}
