// end of the vector in game/Vec_82F8EEE0.h. fn_82F8FBE0 is the iterator's
// constructor from a position and its container; it still has a C unit, so it
// is declared as a function that returns the iterator.
#include "game/Vec_82F8EEE0.h"

extern "C" Iter_82F8EEE0 fn_82F8FBE0(void **ptr, const Vec_82F8EEE0 *cont);

Iter_82F8EEE0 Vec_82F8EEE0::end()
{
    return fn_82F8FBE0(last, this);
}
