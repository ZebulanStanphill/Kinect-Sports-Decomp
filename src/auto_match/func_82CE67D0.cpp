// Probably hkTransform::setMul(const hkQsTransform &, const hkTransform &) (keeps its fn_ name): a is
// converted into a local hkTransform by fn_82CF68C8 (a branch to fn_82CF6738), then multiplied by b.
#include "havok/hkTransform.h"

class hkQsTransform;
extern "C" void fn_82CF68C8(const hkQsTransform *qs, hkTransform *out);

extern "C" void fn_82CE67D0(hkTransform *self, const hkQsTransform *a, const hkTransform *b)
{
    hkTransform h;

    fn_82CF68C8(a, &h);
    self->setMul(h, *b);
}
