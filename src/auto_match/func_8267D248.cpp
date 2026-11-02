// Node_8267D248 destructor: deletes the Inner_8267D248, then the bases
// (GAcquireInterface inline, Base_8267EE90 through fn_8267EE90).
// The real ~Node_8267D248 on the shared header, instead of
// an extern "C" fn_8267D248 wrapper. The vector deleting destructor
// (func_8267D458) and its adjustor thunk (func_8267D600) include this unit.
// The compiler generates a real vector deleting destructor (??_E, with the
// array loop) only in a unit that creates arrays of the class; otherwise ??_E
// is an alternate name for the scalar ??_G. NewArray is that use (inline and
// never called, so it adds no code).
#include "game/Node_8267D248.h"

Node_8267D248::~Node_8267D248()
{
    delete inner;
}

inline Node_8267D248 *NewArray(unsigned int count)
{
    return new Node_8267D248[count];
}
