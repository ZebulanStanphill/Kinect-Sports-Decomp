// this = a * transpose(b) (in Havok, hkMatrix3::setMulInverse(const hkMatrix3 &, const hkRotation &)), keeping
// its fn_ name.
#include "havok/hkMatrix3.h"

// hkMatrix3::setMul is out of line in the game (fn_82CEC6E0); this function, from the same source file, has it
// inline.
HK_FORCE_INLINE void hkMatrix3::setMul(const hkMatrix3 &a, const hkMatrix3 &b)
{
    hkMatrix3 aa = a;
    for (int i = 2; i >= 0; i--) {
        getColumn(i)._setMul3(aa, b.getColumn(i));
    }
}

extern "C" void fn_82CEC730(hkMatrix3 *self, const hkMatrix3 &a, const hkMatrix3 &b)
{
    hkMatrix3 t;
    t._setTranspose(b);
    self->setMul(a, t);
}
