// Destructor of Wrapper_8267EF68: destroys the owned object (fn_8267D2B0) and
// the Node_8267D248 member in reverse order, then the bases.
// On the shared header (~Node_8267D248 is the real
// ??1Node_8267D248@@UAA@XZ, renamed from fn_8267D248). As for Node_8267D248,
// NewArray makes the compiler generate the real vector deleting destructor
// (func_8267F4A8) and its thunk (func_8267FC50), which include this unit.
#include "game/Node_8267D248.h"

Wrapper_8267EF68::~Wrapper_8267EF68()
{
}

inline Wrapper_8267EF68 *NewArray(unsigned int count)
{
    return new Wrapper_8267EF68[count];
}
