// hkpWorldObject::hkpWorldObject(hkFinishLoadedObjectFlag), the serialization "finish" constructor
// (Physics/Dynamics/World/hkpWorldObject.cpp). m_multiThreadCheck is default-constructed (UNMARKED thread id,
// stack trace id 0). setOwner() is a member of the collidable, so the owner offset is computed at run time
// (subf), as in the original.
#include "havok/hkBase.h"
#include "havok/hkpWorldObject.h"

hkpWorldObject::hkpWorldObject(hkFinishLoadedObjectFlag flag)
    : hkReferencedObject(flag), m_collidable(flag), m_name(flag), m_properties(flag)
{
    if (flag.m_finishing) {
        m_collidable.setOwner(this);
    }
}
