// It keeps its fn_ name because a Matching C unit calls it, so it is written as an
// extern "C" function (the static member function has no this).
// hkpSphereSphereAgent::createSphereSphereAgent, creation function: new hkpSphereSphereAgent with the constructor inlined.
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

class hkpSphereSphereAgent : public hkpIterativeLinearCastAgent {
public:
    hkpSphereSphereAgent(hkpContactMgr *mgr) : hkpIterativeLinearCastAgent(mgr) { m_contactPointId = HK_INVALID_CONTACT_POINT; }
    static hkpCollisionAgent *HK_CALL createSphereSphereAgent(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr);

    hkContactPointId m_contactPointId;   // +0xC
};

extern "C" hkpCollisionAgent *fn_82D674D0(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input, hkpContactMgr *mgr)
{
    hkpSphereSphereAgent *agent = new hkpSphereSphereAgent(mgr);
    return agent;
}
