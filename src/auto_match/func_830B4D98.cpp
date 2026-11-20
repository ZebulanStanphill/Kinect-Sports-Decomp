#include "havok/hkRotation.h"

extern "C" void fn_830B4D98(hkRotation *out, const hkRotation *in)
{
    out[0].setTranspose(in[0]);
    out[1].setTranspose(in[2]);
    out[2].setTranspose(in[1]);
    out[3].setTranspose(in[3]);
}
