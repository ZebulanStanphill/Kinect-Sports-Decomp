// hkpBvTreeStreamAgent::updateShapeCollectionFilter (Physics/Collide/Agent/CompoundAgent/BvTreeStream/
// hkpBvTreeStreamAgent.cpp), its vtable's slot +0x20: clears the cached AABB and updates the children on the agent
// track (fn_82D71478, hkAgent1nMachine_UpdateShapeCollectionFilter in Havok) with body B's shape container.
#include "havok/hkpBvTreeStreamAgent.h"

// The visitor input of the 1-n machine, in the order of the stores; +0x8 is not set here.
struct hkpAgent1nMachine_VisitorInput {
    const hkpCdBody *m_bodyA;                        // +0x0
    const hkpCdBody *m_collectionBodyB;              // +0x4
    const void *m_unused8;                           // +0x8
    const hkpShapeContainer *m_containerShapeB;      // +0xC
    const hkpCollisionInput *m_input;                // +0x10
    hkpContactMgr *m_contactMgr;                     // +0x14
    hkCollisionConstraintOwner *m_constraintOwner;   // +0x18
};

extern "C" void fn_82D71478(hkpAgent1nTrack &track,
                            const hkpAgent1nMachine_VisitorInput &vin);   // hkAgent1nMachine_UpdateShapeCollectionFilter

void hkpBvTreeStreamAgent::updateShapeCollectionFilter(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
                                                       const hkpCollisionInput &input,
                                                       hkCollisionConstraintOwner &constraintOwner)
{
    m_cachedAabb.m_min.setZero4();
    m_cachedAabb.m_max.setZero4();
    hkpAgent1nMachine_VisitorInput vin;
    vin.m_containerShapeB = bodyB.getShape()->getContainer();
    vin.m_bodyA = &bodyA;
    vin.m_collectionBodyB = &bodyB;
    vin.m_input = &input;
    vin.m_contactMgr = m_contactMgr;
    vin.m_constraintOwner = &constraintOwner;
    fn_82D71478(m_agentTrack, vin);
}
