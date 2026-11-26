// hkpWorldObject::~hkpWorldObject (Physics/Dynamics/World/hkpWorldObject.cpp).
// hkpWorldObject (Physics/Dynamics/World/hkpWorldObject.h), layout from its destructor (fn_82D7E268) and its
// finish constructor (fn_82D93708): the collidable at +0x10 (0x5C bytes; its destructor is out of line,
// fn_82D3BBC8, and frees m_collisionEntries at +0x50), the multi-thread check at +0x6C, m_name at +0x74,
// m_properties at +0x78 (16-byte hkSimpleProperty), a reference-counted object at +0x84.
#include "havok/hkBase.h"
#include "havok/hkpWorldObject.h"

hkpWorldObject::~hkpWorldObject()
{
    if (m_collidable.getShape())
        m_collidable.getShape()->removeReference();
    if (m_treeData)
        m_treeData->removeReference();
}
