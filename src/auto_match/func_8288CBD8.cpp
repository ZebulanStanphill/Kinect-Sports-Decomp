// std::vector<T *>::push_back(const T *&) inlined into a wrapper.
// Element_8288C1B8 is the placeholder element name the vector's _Reserve
// (?_Reserve@?$vector@PAUElement_8288C1B8@@...) already uses.

#include <vector>

struct Element_8288C1B8;
typedef Element_8288C1B8 *T;

struct Vec_8288CBD8 : public std::vector<T> {
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

extern "C" void fn_8288CBD8(Vec_8288CBD8 *self, const T *val)
{
    self->PushBack(val);
}
