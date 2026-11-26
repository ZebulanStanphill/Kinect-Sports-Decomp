// Sets the hkStringPtr at +0xC from a C string (a setName forwarder).
#include "havok/hkStringPtr.h"

extern "C" void fn_82E14720(char *self, const char *name)
{
    *reinterpret_cast<hkStringPtr *>(self + 0xc) = name;
}
