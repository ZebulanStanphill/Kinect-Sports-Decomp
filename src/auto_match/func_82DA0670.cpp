#include "havok/hkTransform.h"

extern "C" void fn_82DA0670(char *self, const hkTransform *matrix, hkVector4 *out)
{
    out->setTransformedPos(*matrix, *(const hkVector4 *)(self + 0x60));
}
