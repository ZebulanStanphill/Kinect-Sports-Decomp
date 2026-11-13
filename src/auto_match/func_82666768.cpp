// std::vector<T>::const_iterator::operator[] from Visual C++ 2010's <vector>,
// for the vector of game/Element_82666FE0.h: *(*this + offset).
//
// The linker folded operator* of every vector iterator in the XLip library
// into one function, fn_826689B8, which therefore keeps that name. The
// library was built without inlining, so the header's operator[] cannot reach
// it through an inline specialization of operator*, and a specialization of
// operator[] itself is only emitted when the whole class is instantiated. The
// function is written out under its fn_ name instead.
#include <vector>
#include "game/Element_82666FE0.h"

typedef Vector_82666FE0::const_iterator Iterator;

extern "C" const Element_82666FE0 &fn_826689B8(const Iterator *self);

template <> Iterator Iterator::operator+(difference_type) const;

extern "C" const Element_82666FE0 &fn_82666768(const Iterator *self, int offset)
{
    return fn_826689B8(&(*self + offset));
}
