// hkpSphereBoxAgent::createBoxSphereAgent, the flipped agent's creation function: new hkpSymmetricAgentLinearCast<hkpSphereBoxAgent> with the constructor inlined.
#include "havok/hkpSymmetricAgent.h"

typedef hkUint16 hkContactPointId;
#define HK_INVALID_CONTACT_POINT 0xffff

class hkpSphereBoxAgent : public hkpIterativeLinearCastAgent {
public:
    hkpSphereBoxAgent(hkpContactMgr *mgr) : hkpIterativeLinearCastAgent(mgr) { m_contactPointId = HK_INVALID_CONTACT_POINT; }
    static hkpCollisionAgent *HK_CALL createBoxSphereAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkContactPointId m_contactPointId;   // +0xC
};

hkpCollisionAgent *HK_CALL hkpSphereBoxAgent::createBoxSphereAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpSphereBoxAgent *agent = new hkpSymmetricAgentLinearCast<hkpSphereBoxAgent>(mgr);
    return agent;
}
