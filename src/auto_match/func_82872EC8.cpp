// std::vector<Element_828729F8> copy constructor (VC10 <vector>), out of line in the game;
// its _Buy stays out of line too.
#include <vector>

struct Element_828729F8 {
    int data[3];
};

typedef Element_828729F8 T;

template <> bool std::vector<T>::_Buy(size_type);

struct Vec_82872EC8 : std::vector<T> {
    __forceinline Vec_82872EC8 *copy(const std::vector<T> &right)
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

extern "C" Vec_82872EC8 *fn_82872EC8(Vec_82872EC8 *self, const std::vector<T> *right)
{
    return self->copy(*right);
}
