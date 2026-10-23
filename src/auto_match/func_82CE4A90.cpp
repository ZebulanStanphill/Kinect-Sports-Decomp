// finishLoadedObjecthkReferencedObject: hkReferencedObject's entry in its
// hkTypeInfo (lbl_8317E9A0: name, finish, cleanup, vtable), from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL in hkReferencedObjectClass.cpp. It runs the
// finish constructor on an object loaded in place. (static in Havok; external
// here so the unit defines it.)
#include "havok/hkReferencedObject.h"

void HK_CALL finishLoadedObjecthkReferencedObject(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkReferencedObject(f);
}
