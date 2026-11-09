// std::vector<T>::push_back(const T &) from Visual C++ 2010's <vector>,
// inlined into a wrapper that C callers reach as fn_827DCBF8.
// Element_827DCB80 is a placeholder for the game's 4-byte element type
// (the same vector as fn_827DCB80, its _Reserve).

#include <vector>

struct Element_827DCB80 {
    int data[1];
};

typedef Element_827DCB80 T;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_827DCA38(std::vector<T> *self, unsigned int count);
}

template <> void std::vector<T>::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template <> __forceinline void std::vector<T>::reserve(size_type count)
{
    fn_827DCA38(this, count);
}

struct Vec_827DCBF8 : public std::vector<T> {
    __forceinline void PushBack(const T *val)
    {
        if (_Inside(val)) {
            size_type idx = val - _Myfirst;
            if (_Mylast == _Myend) {
                _Reserve(1);
            }
            this->_Alval.construct(_Mylast, _Myfirst[idx]);
        } else {
            if (_Mylast == _Myend) {
                _Reserve(1);
            }
            this->_Alval.construct(_Mylast, *val);
        }
        ++_Mylast;
    }
};

extern "C" void fn_827DCBF8(Vec_827DCBF8 *self, const T *val)
{
    self->PushBack(val);
}
