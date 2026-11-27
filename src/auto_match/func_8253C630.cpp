// hkpWorldCinfo::~hkpWorldCinfo (Physics/Dynamics/World/hkpWorldCinfo.h), emitted in a game object (/O1):
// the inline (empty) destructor stores the vtable, then the three hkRefPtr members release their objects.
// Game code destroys its cinfo with a call to this copy (func_8253CC70); the helper below does the same, so
// the compiler emits it.
#include "havok/hkBase.h"
#include "havok/hkpWorldCinfo.h"

void destroyWorldCinfo_8253C630(hkpWorldCinfo *p)
{
    p->hkpWorldCinfo::~hkpWorldCinfo();
}
