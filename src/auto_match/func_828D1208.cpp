// std::vector<T>::vector(const vector &) from Visual C++ 2010's <vector>, for the
// vector of game/Element_828D0F58.h. _Buy is the out-of-line member
// (func_828D0F58.cpp); the uninitialized copy stays a call to fn_828D1070, which
// takes the allocator's address.
#include "game/Element_828D0F58.h"

extern "C" Element_828D0F58 *fn_828D1070(const Element_828D0F58 *first, const Element_828D0F58 *last,
                                         Element_828D0F58 *dest, Allocator_828D0F58 *al);

template <> bool Vector_828D0F58::_Buy(size_type);

template <> template <>
__forceinline Element_828D0F58 *Vector_828D0F58::_Ucopy<Vector_828D0F58::const_iterator>(
    const_iterator first, const_iterator last, Element_828D0F58 *dest)
{
    return fn_828D1070(first._Ptr, last._Ptr, dest, &this->_Alval);
}

template Vector_828D0F58::vector(const Vector_828D0F58 &);
