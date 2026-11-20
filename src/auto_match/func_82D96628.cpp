#include "havok/hkTransform.h"


extern "C" void fn_82D96628(char *self, const hkTransform *first, const hkTransform *second, const hkVector4 *arg)
{
  reinterpret_cast<hkVector4 *>(self + 0x20)->setTransformedInversePos(*first, *arg);
  reinterpret_cast<hkVector4 *>(self + 0x30)->setTransformedInversePos(*second, *arg);
}
