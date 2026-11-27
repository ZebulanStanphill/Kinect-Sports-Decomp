#include "havok/hkpMultiSphereAgent.h"
#include "havok/hkpCdBody.h"
#include "havok/hkpSphereShape.h"
#include "havok/hkpMultiSphereShape.h"

class Collector_82D6CD50 {
public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void addBody(const hkpCdBody &body, void *a, void *b, void *c);
};

struct Entry_82D6CD50 {
    int m_sphereIndex;
    Collector_82D6CD50 *m_collector;
};

struct Owner_82D6CD50 {
    char pad0[0xc];
    Entry_82D6CD50 *m_entries;   // 0x0c
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

static __forceinline void getClosestPointsBody(const Owner_82D6CD50 *self, const hkpCdBody &body, void *a, void *b, void *c)
{
    const hkpMultiSphereShape *shape = static_cast<const hkpMultiSphereShape *>(body.getShape());
    hkMotionState ms(*body.getMotionState());
    hkpSphereShape sphere(0.0f);
    hkpCdBody sphereBody(&body, &ms);
    const Entry_82D6CD50 *e = self->m_entries;
    for (int i = self->m_numEntries - 1; i >= 0; i--, e++) {
        const hkVector4 &s = shape->m_spheres[e->m_sphereIndex];
        setTransformedPos(ms.m_transform.m_translation, ms.m_transform.m_rotation, body.getMotionState()->m_transform.m_translation, s);
        sphere.m_radius = s(3);
        sphereBody.setShape(&sphere, i);
        e->m_collector->addBody(sphereBody, a, b, c);
    }
}

// hkpMultiSphereAgent::getClosestPoints (+0x10 of ??_7hkpMultiSphereAgent@@6B@): the body above keeps the unit's
// own view of the agent (its child agents at +0xC) and of the child agents' slot +0x10.
void hkpMultiSphereAgent::getClosestPoints(const hkpCdBody &bodyA, const hkpCdBody &bodyB, const hkpCollisionInput &input,
                                           hkpCdPointCollector &collector)
{
    getClosestPointsBody((const Owner_82D6CD50 *)this, bodyA, (void *)&bodyB, (void *)&input, (void *)&collector);
}
