// A forwarder: the 3x3 at +0xB0 = the one at +0x60 times the argument.
#include "havok/hkMatrix3.h"

extern "C" void fn_82D97C10(char *self, const hkMatrix3 *arg)
{
    reinterpret_cast<hkMatrix3 *>(self + 0xb0)->setMul(*reinterpret_cast<const hkMatrix3 *>(self + 0x60), *arg);
}
