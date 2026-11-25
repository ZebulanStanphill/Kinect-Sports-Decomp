// hkpSphereBoxAgent::createBoxSphereAgent, the flipped agent's creation function: new hkpSymmetricAgentLinearCast<hkpSphereBoxAgent> with the constructor inlined.
#include "havok/hkpSymmetricAgent.h"

// hkpTriangleShape (RTTI: hkpConvexShape -> hkpSphereRepShape -> hkpShape): the vertices start at +0x20.
class hkpTriangleShape : public hkpConvexShape {
public:
    const hkVector4 &getVertex(int i) const { return (&m_vertexA)[i]; }

    hkUint16 m_weldingInfo;   // +0x14
    hkUint8 m_weldingType;    // +0x16
    hkUint8 m_isExtruded;     // +0x17
    hkVector4 m_vertexA;      // +0x20
    hkVector4 m_vertexB;      // +0x30
    hkVector4 m_vertexC;      // +0x40
    hkVector4 m_extrusion;    // +0x50
};

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
