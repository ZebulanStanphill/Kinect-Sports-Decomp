// hkpRigidBody::clone() const (Physics/Dynamics/Entity/hkpRigidBody.cpp), vtable +0x18: builds a body from
// this one's construction info, copies the motion (and the saved motion, if any) word by word, points the
// collidable at the copy's motion state, copies the properties, name and user data and clones the breakable
// body.
#include "havok/hkpRigidBody.h"
#include "havok/hkpRigidBodyCinfo.h"
#include "havok/hkpBreakableBody.h"

template <int size>
static HK_FORCE_INLINE void memCpy16(void *dst, const void *src)
{
    const hkUint32 *src32 = (const hkUint32 *)src;
    hkUint32 *dst32 = (hkUint32 *)dst;
    for (int i = 0; i < size / 16; i++) {
        dst32[0] = src32[0];
        dst32[1] = src32[1];
        dst32[2] = src32[2];
        dst32[3] = src32[3];
        dst32 += 4;
        src32 += 4;
    }
}

// The callees, named by their place in Havok's clone().
extern "C" {
void fn_82D8C548(const hkpRigidBody *self, hkpRigidBodyCinfo *infoOut);       // hkpRigidBody::getCinfo
void fn_82D8C858(hkpRigidBody *self, const hkpRigidBody *other);              // hkpWorldObject::copyProperties
}

hkpRigidBody *hkpRigidBody::clone() const
{
    hkpRigidBodyCinfo info;
    fn_82D8C548(this, &info);
    hkpRigidBody *copy = new hkpRigidBody(info);
    memCpy16<sizeof(hkpMaxSizeMotion)>(&copy->m_motion, &m_motion);
    if (m_motion.m_savedMotion) {
        copy->m_motion.m_savedMotion = new hkpMaxSizeMotion;
        memCpy16<sizeof(hkpMaxSizeMotion)>(copy->m_motion.m_savedMotion, m_motion.m_savedMotion);
    }
    copy->m_collidable.m_motion = copy->getMotionState();
    fn_82D8C858(copy, this);
    copy->m_name = m_name.cString();
    copy->m_userData = m_userData;
    if (m_breakableBody)
        copy->m_breakableBody = m_breakableBody->cloneBreakableBody(copy);
    return copy;
}
