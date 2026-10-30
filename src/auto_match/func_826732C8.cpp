// std::vector<Element_826703A0> copy constructor (VC10 <vector>), out of line in the game;
// its _Buy stays out of line too.
#include <vector>

struct Element_826703A0 {
    int data[2];
};

typedef Element_826703A0 T;

template <> bool std::vector<T>::_Buy(size_type);

struct Vec_826732C8 : std::vector<T> {
    __forceinline Vec_826732C8 *copy(const std::vector<T> &right)
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

extern "C" Vec_826732C8 *fn_826732C8(Vec_826732C8 *self, const std::vector<T> *right)
{
    return self->copy(*right);
}
