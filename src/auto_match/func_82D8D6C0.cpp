// hkpAabbPhantom::hkpAabbPhantom(const hkAabb &aabb, hkUint32 collisionFilterInfo) (Havok 2010,
// Physics/Dynamics/Phantom/hkpAabbPhantom.cpp): an AABB phantom without a shape; m_overlappingCollidables gets
// its reserve from fn_82D7E1E0 (keeps its fn_ name).
#include "havok/hkpAabbPhantom.h"

hkpAabbPhantom::hkpAabbPhantom(const hkAabb &aabb, hkUint32 collisionFilterInfo)
    : hkpPhantom(HK_NULL), m_orderDirty(false)
{
    m_aabb = aabb;
    m_collidable.setCollisionFilterInfo(collisionFilterInfo);
    fn_82D7E1E0(this);
}
