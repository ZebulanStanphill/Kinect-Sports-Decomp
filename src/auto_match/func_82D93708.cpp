// hkpWorldObject::hkpWorldObject(hkFinishLoadedObjectFlag), the serialization
// "finish" constructor. It keeps its fn_ name (the Matching hkpAabbPhantom
// finish constructor, func_82D7E3E8, calls it), so it is written as an explicit
// constructor call (no placement-new null check). setOwner() must be a member
// of the collidable so the owner offset is computed at run time (subf), as in
// the original.
#include "havok/hkBase.h"
#include "havok/hkpWorldObject.h"

// m_multiThreadCheck is default-constructed (UNMARKED thread id, stack trace id 0).
HK_FORCE_INLINE hkpWorldObject::hkpWorldObject(hkFinishLoadedObjectFlag flag)
    : hkReferencedObject(flag), m_collidable(flag), m_name(flag), m_properties(flag)
{
    if (flag.m_finishing) {
        m_collidable.setOwner(this);
    }
}

extern "C" hkpWorldObject *fn_82D93708(hkpWorldObject *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpWorldObject::hkpWorldObject(flag);
    return self;
}
