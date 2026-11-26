// Sets the hkStringPtr at +0x14 from a C string (a setName forwarder).
#include "havok/hkStringPtr.h"

extern "C" void fn_82E045E0(char *self, const char *name)
{
    *reinterpret_cast<hkStringPtr *>(self + 0x14) = name;
}
