#include "havok/hkpCdBody.h"
#include "havok/hkpCdBodyPairCollector.h"

class hkpSphereShape : public hkpConvexShape {
public:
    hkpSphereShape(hkReal radius);
};

class hkpMultiSphereShape : public hkpSphereRepShape {
public:
    int m_numSpheres;         // 0x10
    hkVector4 m_spheres[8];   // 0x20: centre in xyz, radius in w
};

class Agent_82D6D1B8 {
public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void getPenetrations(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const void *input,
                                 hkpCdBodyPairCollector &collector);   // 0xc
};

struct Entry_82D6D1B8 {
    int m_sphereIndex;
    Agent_82D6D1B8 *m_agent;
};

struct Owner_82D6D1B8 {
    char pad0[0xc];
    Entry_82D6D1B8 *m_entries;   // 0x0c
    int m_numEntries;            // 0x10
};

static __forceinline void setTransformedPos(hkVector4 &out, const hkRotation &r, const hkVector4 &t, const hkVector4 &b)
{
    __vector4 xb = __vspltw(b.m_quad, 0);
    __vector4 yb = __vspltw(b.m_quad, 1);
    __vector4 zb = __vspltw(b.m_quad, 2);
    __vector4 t0 = __vmulfp(r.m_col0.m_quad, xb);
    t0 = __vmaddfp(r.m_col1.m_quad, yb, t0);
    t0 = __vmaddfp(r.m_col2.m_quad, zb, t0);
    out.m_quad = __vaddfp(t.m_quad, t0);
}

extern "C" void fn_82D6D1B8(const Owner_82D6D1B8 *self, const hkpCdBody &body, const hkpCdBody &bodyB, const void *input,
                            hkpCdBodyPairCollector &collector)
{
    const hkpMultiSphereShape *shape = static_cast<const hkpMultiSphereShape *>(body.getShape());
    hkMotionState ms(*body.getMotionState());
    hkpSphereShape sphere(0.0f);
    hkpCdBody sphereBody(&body, &ms);
    const Entry_82D6D1B8 *e = self->m_entries;
    for (int i = self->m_numEntries - 1; i >= 0; i--, e++) {
        const hkVector4 &s = shape->m_spheres[e->m_sphereIndex];
        setTransformedPos(ms.m_transform.m_translation, ms.m_transform.m_rotation,
                          body.getMotionState()->m_transform.m_translation, s);
        sphere.m_radius = s(3);
        sphereBody.setShape(&sphere, i);
        e->m_agent->getPenetrations(sphereBody, bodyB, input, collector);
        if (collector.m_earlyOut) {
            break;
        }
    }
}
