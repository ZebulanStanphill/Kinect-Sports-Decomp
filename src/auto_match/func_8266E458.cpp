// std::vector<Element> copy constructor (VC10 <vector>), element with a non-trivial copy
// constructor (fn_8266CB08). Its _Buy stays out of line.
#include <vector>

extern "C" void *fn_8266CB08(void *self, const void *src);

struct Element_828729F8 {
    int data[3];
    Element_828729F8() {}
    Element_828729F8(const Element_828729F8 &o) { fn_8266CB08(this, &o); }
};

typedef Element_828729F8 T;

template <> bool std::vector<T>::_Buy(size_type);

struct Vec_8266E458 : std::vector<T> {
    __forceinline Vec_8266E458 *copy(const std::vector<T> &right)
    {
        _Myfirst = 0;
        _Mylast = 0;
        _Myend = 0;
        if (_Buy(right.size())) {
            _Mylast = _Ucopy(right.begin(), right.end(), _Myfirst);
        }
        return this;
    }
};

extern "C" Vec_8266E458 *fn_8266E458(Vec_8266E458 *self, const std::vector<T> *right)
{
    return self->copy(*right);
}
