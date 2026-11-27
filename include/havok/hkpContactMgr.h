// hkpContactMgr (Physics/Collide/Agent/ContactMgr/hkpContactMgr.h), 0xC bytes: what a collision agent reports
// its contact points to; m_type says which manager it is. The game has no vtable of its own for it (it is
// abstract). Its vtable has seven slots after hkReferencedObject's:
//   +0x0C addContactPoint       hkpReportContactMgr's 82DAB098, hkpSimpleConstraintContactMgr's 82DABA88
//   +0x10 reserveContactPoints  the report manager's returns 0; the simple one's is 82DAB710
//   +0x14 removeContactPoint    82DAB3A8 (a 16-bit id and the constraint owner), 82DABF58
//   +0x18 processContact        82DAB5E0 (two collidables, the input, the collision data), 82DAC0D0; the agent
//                               sector job (82DC39A0) calls it
//   +0x1C addToi                82DAB220 (nine arguments, the time as a real), 82DAB970
//   +0x20 removeToi             82DAB310 (the constraint owner and the properties), 82DAB758
//   +0x24 cleanup               82DAB6E8, in both
// hkpNullContactMgr's vtable has the pattern of their results: a folded "return 0" at +0xC, +0x10 and +0x1C
// and the empty function at the four others. The order is that of Havok's header; the names and the parameter
// types are Havok's (its later versions append "Impl" to the first six), and only the number and kind of the
// arguments is checked against the functions above. Which are pure is from Havok's header too (all but
// cleanup). The enumerator names follow Havok's header.
#ifndef HAVOK_HKPCONTACTMGR_H
#define HAVOK_HKPCONTACTMGR_H

#include "havok/hkBase.h"

class hkContactPoint;
class hkpCdBody;
class hkpCollidable;
class hkpConstraintOwner;
class hkpContactPointProperties;
struct hkpGskCache;
struct hkpProcessCollisionData;
struct hkpProcessCollisionInput;
struct hkpProcessCollisionOutput;

class hkpContactMgr : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    enum Type {
        TYPE_SIMPLE_CONSTRAINT_CONTACT_MGR,
        TYPE_REPORT_CONTACT_MGR,
        TYPE_CONVEX_LIST_CONTACT_MGR,
        TYPE_NULL_CONTACT_MGR,
        TYPE_USER_CONTACT_MGR,
        TYPE_MAX
    };
    enum ToiAccept {
        TOI_ACCEPT = 0,
        TOI_REJECT = 1
    };
    hkpContactMgr(Type type) : m_type(type) {}

    virtual hkUint16 addContactPoint(const hkpCdBody &a, const hkpCdBody &b, const hkpProcessCollisionInput &input,
                                     hkpProcessCollisionOutput &output, const hkpGskCache *contactCache,
                                     hkContactPoint &cp) = 0;                                       // +0xC
    virtual hkResult reserveContactPoints(int numPoints) = 0;                                       // +0x10
    virtual void removeContactPoint(hkUint16 cpId, hkpConstraintOwner &constraintOwner) = 0;        // +0x14
    virtual void processContact(const hkpCollidable &a, const hkpCollidable &b,
                                const hkpProcessCollisionInput &input,
                                hkpProcessCollisionData &collisionData) = 0;                        // +0x18
    virtual ToiAccept addToi(const hkpCdBody &a, const hkpCdBody &b, const hkpProcessCollisionInput &input,
                             hkpProcessCollisionOutput &output, hkReal toi, hkContactPoint &cp,
                             const hkpGskCache *gskCache, hkReal &projectedVelocity,
                             hkpContactPointProperties &propertiesOut) = 0;                         // +0x1C
    virtual void removeToi(hkpConstraintOwner &constraintOwner, hkpContactPointProperties &properties) = 0;   // +0x20
    virtual void cleanup() {}                                                                       // +0x24

    Type m_type;   // +0x8
};

#endif
