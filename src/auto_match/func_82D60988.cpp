// hkpMultiRayConvexAgent::createConvexMultiRayAgent: the flipped agent's creation function (registered by registerAgent), allocating
// hkpSymmetricAgentLinearCast<hkpMultiRayConvexAgent> (0x20 bytes); its inline constructor calls hkpMultiRayConvexAgent's out-of-line
// constructor with the bodies swapped, then stores its own vtable.
#include "havok/hkpSymmetricAgent.h"

class hkpMultiRayConvexAgent : public hkpIterativeLinearCastAgent {
public:
    hkpMultiRayConvexAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);
    static hkpCollisionAgent *HK_CALL createConvexMultiRayAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkUint8 m_members[0x14];   // +0xC
};

hkpCollisionAgent *HK_CALL hkpMultiRayConvexAgent::createConvexMultiRayAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpMultiRayConvexAgent *agent = new hkpSymmetricAgentLinearCast<hkpMultiRayConvexAgent>(bodyA, bodyB, input, mgr);
    return agent;
}
