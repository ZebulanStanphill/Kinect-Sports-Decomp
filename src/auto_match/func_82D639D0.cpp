// hkpCapsuleCapsuleAgent::createCapsuleCapsuleAgent, creation function: new hkpCapsuleCapsuleAgent with the constructor inlined.
#include "havok/hkpSymmetricAgent.h"

typedef hkUint16 hkContactPointId;
#define HK_INVALID_CONTACT_POINT 0xffff

class hkpCapsuleCapsuleAgent : public hkpIterativeLinearCastAgent {
public:
    hkpCapsuleCapsuleAgent(hkpContactMgr *mgr) : hkpIterativeLinearCastAgent(mgr)
    {
        m_contactPointId[0] = HK_INVALID_CONTACT_POINT;
        m_contactPointId[1] = HK_INVALID_CONTACT_POINT;
        m_contactPointId[2] = HK_INVALID_CONTACT_POINT;
    }
    static hkpCollisionAgent *HK_CALL createCapsuleCapsuleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkContactPointId m_contactPointId[3];   // +0xC
};

hkpCollisionAgent *HK_CALL hkpCapsuleCapsuleAgent::createCapsuleCapsuleAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpCapsuleCapsuleAgent *agent = new hkpCapsuleCapsuleAgent(mgr);
    return agent;
}
