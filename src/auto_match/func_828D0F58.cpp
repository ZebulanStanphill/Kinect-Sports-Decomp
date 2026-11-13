// std::vector<T>::_Buy(size_type) from Visual C++ 2010's <vector>, for the
// vector of game/Element_828D0F58.h. vector<T>::_Xlen keeps the name that C
// units use for std::_Xlength_error.
#include "game/Element_828D0F58.h"

extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);

template <> void Vector_828D0F58::_Xlen() const
{
    fn_82F622A8("vector<T> too long");
}

template bool Vector_828D0F58::_Buy(size_type);
