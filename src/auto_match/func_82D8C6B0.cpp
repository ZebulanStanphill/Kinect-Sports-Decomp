// hkpRigidBody::clone() const (Physics/Dynamics/Entity/hkpRigidBody.cpp), vtable +0x18: builds a body from
// this one's construction info, copies the motion (and the saved motion, if any) word by word, points the
// collidable at the copy's motion state, copies the properties, name and user data and clones the breakable
// body. The function keeps its fn_ name, and so does the constructor from the construction info
// (fn_82D8C258), which is called on raw memory from the class allocator.
#include "havok/hkpRigidBody.h"

// hkpBreakableBody (Physics/Dynamics/Destruction/BreakableBody/hkpBreakableBody.h): only the slot used here.
class hkpBreakableBody : public hkReferencedObject {
public:
    virtual hkpBreakableBody *cloneBreakableBody(hkpRigidBody *clonedBody) const;   // +0xC
};

// hkpRigidBodyCinfo, by size only.
struct __declspec(align(16)) hkpRigidBodyCinfo {
    unsigned char bytes[0xc0];
};

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
void fn_82D8B168(hkpRigidBodyCinfo *self);                                    // hkpRigidBodyCinfo's constructor
void fn_82D8C548(const hkpRigidBody *self, hkpRigidBodyCinfo *infoOut);       // hkpRigidBody::getCinfo
hkpRigidBody *fn_82D8C258(hkpRigidBody *self, const hkpRigidBodyCinfo *info); // the constructor from the info
void fn_82D8C858(hkpRigidBody *self, const hkpRigidBody *other);              // hkpWorldObject::copyProperties
}

extern "C" hkpRigidBody *fn_82D8C6B0(const hkpRigidBody *self)
{
    hkpRigidBodyCinfo info;
    fn_82D8B168(&info);
    fn_82D8C548(self, &info);
    void *mem = hkpRigidBody::operator new(sizeof(hkpRigidBody));
    hkpRigidBody *copy = fn_82D8C258((hkpRigidBody *)mem, &info);
    memCpy16<sizeof(hkpMaxSizeMotion)>(&copy->m_motion, &self->m_motion);
    if (self->m_motion.m_savedMotion) {
        copy->m_motion.m_savedMotion = new hkpMaxSizeMotion;
        memCpy16<sizeof(hkpMaxSizeMotion)>(copy->m_motion.m_savedMotion, self->m_motion.m_savedMotion);
    }
    copy->m_collidable.m_motion = copy->getMotionState();
    fn_82D8C858(copy, self);
    copy->m_name = self->m_name.cString();
    copy->m_userData = self->m_userData;
    if (self->m_breakableBody)
        copy->m_breakableBody = self->m_breakableBody->cloneBreakableBody(copy);
    return copy;
}
