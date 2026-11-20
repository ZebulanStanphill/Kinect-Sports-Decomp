// hkTransform::setMulMulInverse (keeps its fn_ name): this = a * inverse(b), through
// setInverse (fn_82CE66E8) and setMul.
#include "havok/hkTransform.h"

extern "C" void fn_82CE66E8(hkTransform *self, const hkTransform &t);

extern "C" void fn_82CE6920(hkTransform *self, const hkTransform *a, const hkTransform *b)
{
    hkTransform h;

    fn_82CE66E8(&h, *b);
    self->setMul(*a, h);
}
