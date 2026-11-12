// Havok hkpMultiSphereAgent::getPenetrations shape (sibling of fn_82D6CD50): for each (sphere index,
// agent) pair, builds a temporary sphere body for that sphere of the multi-sphere shape (centre moved
// into the copied motion state, radius from w), calls the agent's getPenetrations (slot 3) and stops
// when the collector asks for an early out.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;

extern "C" {
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
}

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline float &operator()(int i) { return m_quad.vector4_f32[i]; }
    __forceinline const float &operator()(int i) const { return m_quad.vector4_f32[i]; }
    hkQuadReal m_quad;
};

class hkRotation {
public:
    hkVector4 m_col0, m_col1, m_col2;
};

class hkTransform {
public:
    hkRotation m_rotation;
    hkVector4 m_translation;
};

class hkMotionState {
public:
    hkMotionState(const hkMotionState &ms);
    hkTransform m_transform;   // 0x00
    char m_rest[0x70];
};

class hkReferencedObject {
public:
    virtual ~hkReferencedObject() {}
    unsigned short m_memSizeAndFlags;
    short m_referenceCount;
};

class hkpSphereShape : public hkReferencedObject {
public:
    hkpSphereShape(float radius);
    int m_userData;    // 0x08
    int m_type;        // 0x0c
    float m_radius;    // 0x10
};

struct hkpCdBody {
    const void *m_shape;            // 0x00
    unsigned int m_shapeKey;        // 0x04
    const hkMotionState *m_motion;  // 0x08
    const hkpCdBody *m_parent;      // 0x0c
};

struct hkpMultiSphereShape_82D6D1B8 {
    char pad0[0x20];
    hkVector4 m_spheres[8];   // 0x20
};

class hkpCdBodyPairCollector {
public:
    virtual ~hkpCdBodyPairCollector() {}
    bool m_earlyOut;   // 0x04
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
    const hkpMultiSphereShape_82D6D1B8 *shape = (const hkpMultiSphereShape_82D6D1B8 *)body.m_shape;
    hkMotionState ms(*body.m_motion);
    hkpSphereShape sphere(0.0f);
    hkpCdBody sphereBody;
    sphereBody.m_parent = &body;
    sphereBody.m_motion = &ms;
    const Entry_82D6D1B8 *e = self->m_entries;
    for (int i = self->m_numEntries - 1; i >= 0; i--, e++) {
        const hkVector4 &s = shape->m_spheres[e->m_sphereIndex];
        setTransformedPos(ms.m_transform.m_translation, ms.m_transform.m_rotation, body.m_motion->m_transform.m_translation, s);
        sphere.m_radius = s(3);
        sphereBody.m_shape = &sphere;
        sphereBody.m_shapeKey = i;
        e->m_agent->getPenetrations(sphereBody, bodyB, input, collector);
        if (collector.m_earlyOut) {
            break;
        }
    }
}
