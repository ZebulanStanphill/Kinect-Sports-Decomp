// hkpSphereCapsuleAgent::createCapsuleSphereAgent, the flipped agent's creation function: new hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent> with the constructor inlined.
#include "havok/hkpSymmetricAgent.h"

typedef hkUint16 hkContactPointId;
#define HK_INVALID_CONTACT_POINT 0xffff

class hkpSphereCapsuleAgent : public hkpIterativeLinearCastAgent {
public:
    hkpSphereCapsuleAgent(hkpContactMgr *mgr) : hkpIterativeLinearCastAgent(mgr) { m_contactPointId = HK_INVALID_CONTACT_POINT; }
    static hkpCollisionAgent *HK_CALL createCapsuleSphereAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkContactPointId m_contactPointId;   // +0xC
};

hkpCollisionAgent *HK_CALL hkpSphereCapsuleAgent::createCapsuleSphereAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpSphereCapsuleAgent *agent = new hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>(mgr);
    return agent;
}
