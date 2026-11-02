// std::vector<Element_828729F8> copy constructor (VC10 <vector>), out of line
// in the game; its _Buy stays out of line too. Element_828729F8 is a
// placeholder for the game's 12-byte (3-float) vector type, also named
// Element_82834F10 elsewhere.
#include <vector>

struct Element_828729F8 {
    int data[3];
};

typedef Element_828729F8 T;

template <> bool std::vector<T>::_Buy(size_type);

template std::vector<T>::vector(const std::vector<T> &);
