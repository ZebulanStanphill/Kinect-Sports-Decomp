// hkpBvTreeAgent scalar deleting destructor: calls the user-written destructor (fn_82D558B0) out of line,
// then frees through the class allocator. The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

class hkpCdBody;
class hkpContactMgr;
class hkpConstraintOwner;
class hkpCdBodyPairCollector;
class hkpCdPointCollector;
typedef hkpConstraintOwner hkCollisionConstraintOwner;
struct hkpCollisionInput;
struct hkpLinearCastCollisionInput;
struct hkpProcessCollisionInput;
struct hkpProcessCollisionOutput;
typedef hkUint32 hkpShapeKey;

// hkpCollisionAgent (Physics/Collide/Agent/hkpCollisionAgent.h): hkReferencedObject, then
// hkpContactMgr *m_contactMgr (+0x8). Vtable slots from func_82D60AC8.
class hkpCollisionAgent : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpCollisionAgent(hkpContactMgr *contactMgr) : m_contactMgr(contactMgr) {}
    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                 hkpCdBodyPairCollector &collector);   // +0xC
    virtual void getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                  hkpCdPointCollector &collector);   // +0x10
    virtual void linearCast(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpLinearCastCollisionInput &input,
                            hkpCdPointCollector &collector, hkpCdPointCollector *startCollector);   // +0x14
    virtual void processCollision(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpProcessCollisionInput &input,
                                  hkpProcessCollisionOutput &result);   // +0x18
    virtual void cleanup(hkCollisionConstraintOwner &constraintOwner);   // +0x1C

    hkpContactMgr *m_contactMgr;   // +0x8
};

struct hkpBvAgentEntryInfo {
    hkpShapeKey m_key;
    hkInt32 m_userInfo;
    hkpCollisionAgent *m_collisionAgent;
};

class hkpBvTreeAgent : public hkpCollisionAgent {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpBvTreeAgent(hkpContactMgr *mgr) : hkpCollisionAgent(mgr) {}
    virtual ~hkpBvTreeAgent();

    hkArray<hkpBvAgentEntryInfo> m_collisionPartners;   // +0xC
};

void emitVtable_82D55A90(void *p) { new (p) hkpBvTreeAgent(0); }
