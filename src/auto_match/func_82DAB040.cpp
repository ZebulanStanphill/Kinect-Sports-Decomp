// An empty destructor of an hkBaseObject subclass whose class is not known: nothing references it.
// Only hkBaseObject's vtable store survives (the derived classes' stores are dead), so it keeps its
// fn_ name and is written as hkBaseObject's inline destructor (as func_82DDE0A8.cpp).
#include "havok/hkBase.h"

extern "C" void fn_82DAB040(hkBaseObject *self)
{
    self->hkBaseObject::~hkBaseObject();
}
