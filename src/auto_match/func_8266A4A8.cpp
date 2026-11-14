// Makes an iterator from a position in a vector (game/VectorBase_8266A4A8.h).
// fn_82663BA8 is the iterator's constructor from a position and its
// container; it still has a C unit, so it is declared as a function that
// returns the iterator.
#include "game/VectorBase_8266A4A8.h"

extern "C" Iter_8266A4A8 fn_82663BA8(void *ptr, const VectorBase_8266A4A8 *container);

Iter_8266A4A8 VectorBase_8266A4A8::MakeIter(void *where) const
{
    return fn_82663BA8(where, this);
}
