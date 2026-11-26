// hkpWorldCinfo::~hkpWorldCinfo (Physics/Dynamics/World/hkpWorldCinfo.h),
// emitted in a game object (/O1). The user-written (empty) destructor stores
// the vtable, then the three hkRefPtr members release their objects.
// It keeps its fn_ name because a Matching C unit (fn_8253C6B8) calls it: the
// destructor is defined inline and expanded into an extern "C" definition.
#include "havok/hkBase.h"
#include "havok/hkpWorldCinfo.h"

extern "C" void fn_8253C630(hkpWorldCinfo *self)
{
    self->hkpWorldCinfo::~hkpWorldCinfo();
}
