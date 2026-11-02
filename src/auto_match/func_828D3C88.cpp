// std::vector<T>::push_back(const T &) inlined into a wrapper.
// Element_828D3C10 is a placeholder for the game's 80-byte element type,
// whose copy constructor is fn_828D36C8.

#include <vector>

struct Element_828D3C10 {
    Element_828D3C10(const Element_828D3C10 &other);
    int data[20];
};

extern "C" void fn_828D36C8(Element_828D3C10 *self, const Element_828D3C10 *other);

inline Element_828D3C10::Element_828D3C10(const Element_828D3C10 &other)
{
    fn_828D36C8(this, &other);
}

typedef Element_828D3C10 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_828D3928(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_828D3928(this, count);
}

struct Vec_828D3C88 : public std::vector<T> {
    __forceinline void PushBack(const T *val)
    {
        if (_Inside(val)) {
            size_type idx = val - _Myfirst;
            if (_Mylast == _Myend) {
                _Reserve(1);
            }
            if (_Mylast != 0) {
                new ((void *)_Mylast) T(_Myfirst[idx]);
            }
            ++_Mylast;
        } else {
            if (_Mylast == _Myend) {
                _Reserve(1);
            }
            if (_Mylast != 0) {
                new ((void *)_Mylast) T(*val);
            }
            ++_Mylast;
        }
    }
};

extern "C" void fn_828D3C88(Vec_828D3C88 *self, const T *val)
{
    self->PushBack(val);
}
