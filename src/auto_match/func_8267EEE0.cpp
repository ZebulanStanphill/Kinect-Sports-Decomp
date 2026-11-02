// Constructor of Wrapper_8267EF68 (see func_8267EF68.cpp for the class), called by name
// from C units, so it stays fn_8267EEE0 and builds the object by placement new.
#include "game/Node_8267D248.h"

extern "C" Wrapper_8267EF68 *fn_8267EEE0(Wrapper_8267EF68 *w, unsigned char b, unsigned int a)
{
    w->Wrapper_8267EF68::Wrapper_8267EF68(b, a);
    return w;
}
