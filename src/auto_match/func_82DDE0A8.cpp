// An empty destructor of an hkBaseObject subclass whose class is not known: nothing references it, and it sits
// among hkpDefaultToiResourceMgr's functions. Only hkBaseObject's vtable store survives (the derived classes'
// stores are dead), so it keeps its fn_ name and is written as hkBaseObject's inline destructor.
#include "havok/hkBase.h"

extern "C" void fn_82DDE0A8(hkBaseObject *self)
{
    self->hkBaseObject::~hkBaseObject();
}
