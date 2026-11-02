// Constructor of Wrapper_8267F0E0 (see func_8267F0E0.cpp for the class), called by name
// from C units, so it stays fn_8267F058 and builds the object by placement new.
#include "game/Node_8267D248.h"

extern "C" Wrapper_8267F0E0 *fn_8267F058(Wrapper_8267F0E0 *w, unsigned int b, unsigned int a)
{
    w->Wrapper_8267F0E0::Wrapper_8267F0E0(b, a);
    return w;
}
