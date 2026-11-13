// Havok hkpBoxBoxAgent3::process shape: inside the "TtBoxBox3" timer scope, builds an
// hkpBoxBoxCollisionDetection on the stack (bodies, environment, contact manager, result, both
// world transforms, aTb, box radii = half extents + convex radius, tolerance vectors and the 0.01
// boundary tolerance), computes the manifold into the agent data, copies its point count into the
// agent entry and returns the address after the manifold.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;
extern "C" {
__vector4 __vspltw(__vector4, unsigned int);
__vector4 __vaddfp(__vector4, __vector4);
}

typedef float hkReal;

class hkVector4 {
public:
    __forceinline void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    __forceinline void setAll(hkReal x)
    {
        m_quad.vector4_f32[0] = x;
        m_quad = __vspltw(m_quad, 0);
    }
    __forceinline void setAdd4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vaddfp(a.m_quad, b.m_quad); }
    hkQuadReal m_quad;
};

class hkTransform {
public:
    __forceinline void operator=(const hkTransform &t)
    {
        m_col0 = t.m_col0;
        m_col1 = t.m_col1;
        m_col2 = t.m_col2;
        m_translation = t.m_translation;
    }
    hkVector4 m_col0;
    hkVector4 m_col1;
    hkVector4 m_col2;
    hkVector4 m_translation;
};

struct hkpBoxShape {
    char pad0[0x10];
    hkReal m_radius;             // 0x10
    char pad14[0xc];
    hkVector4 m_halfExtents;     // 0x20
};

struct hkpCdBody {
    const hkpBoxShape *m_shape;  // 0x00
    int m_shapeKey;              // 0x04
    const hkTransform *m_motion; // 0x08
    __forceinline const hkTransform &getTransform() const { return *m_motion; }
};

struct hkpProcessCollisionInput {
    char pad0[0x8];
    hkReal m_tolerance;          // 0x08
};

struct hkpAgent3ProcessInput {
    const hkpCdBody *m_bodyA;              // 0x00
    const hkpCdBody *m_bodyB;              // 0x04
    const hkpCdBody *m_overrideBodyA;      // 0x08
    const hkpProcessCollisionInput *m_input; // 0x0c
    void *m_contactMgr;                    // 0x10
    char pad14[0xc];
    hkTransform m_aTb;                     // 0x20
};

struct hkpAgentEntry {
    char pad0[2];
    unsigned char m_numContactPoints;      // 0x02
};

struct hkpBoxBoxManifold {
    char pad0[0x21];
    unsigned char m_numPoints;             // 0x21
    char pad22[0x1e];
};

class hkpBoxBoxCollisionDetection {
public:
    __forceinline hkpBoxBoxCollisionDetection(const hkpCdBody &bodyA, const hkpCdBody &bodyB,
        const hkpProcessCollisionInput *env, void *mgr, void *result,
        const hkTransform &aTb, const hkTransform &wTa, const hkVector4 &radiusA,
        const hkTransform &wTb, const hkVector4 &radiusB, hkReal tolerance)
        : m_bodyA(bodyA), m_bodyB(bodyB), m_env(env), m_contactMgr(mgr), m_result(result),
          m_wTa(wTa), m_wTb(wTb), m_tolerance(tolerance)
    {
        m_aTb = aTb;
        m_radiusA = radiusA;
        m_radiusB = radiusB;
        m_tolerance4.setAll(tolerance);
        m_keepRadiusA.setAdd4(m_tolerance4, m_radiusA);
        m_keepRadiusB.setAdd4(m_tolerance4, m_radiusB);
        m_boundaryTolerance = 0.01f;
    }

    const hkpCdBody &m_bodyA;                // 0x00
    const hkpCdBody &m_bodyB;                // 0x04
    const hkpProcessCollisionInput *m_env;   // 0x08
    void *m_contactMgr;                      // 0x0c
    void *m_result;                          // 0x10
    const hkTransform &m_wTa;                // 0x14
    const hkTransform &m_wTb;                // 0x18
    hkTransform m_aTb;                       // 0x20
    hkVector4 m_radiusA;                     // 0x60
    hkVector4 m_radiusB;                     // 0x70
    hkVector4 m_tolerance4;                  // 0x80
    hkVector4 m_keepRadiusA;                 // 0x90
    hkVector4 m_keepRadiusB;                 // 0xa0
    hkReal m_tolerance;                      // 0xb0
    hkReal m_boundaryTolerance;              // 0xb4
    char m_unknownb8[0x70];                  // 0xb8: not read here; sized from the frame
};

struct ProfTls_82D67EF8 {
    int unk0;
    void **cur;
    int unk8;
    void **end;
};

extern "C" {
extern unsigned int lbl_8323B4A0;
void *KeTlsGetValue(unsigned int index);
unsigned __int64 __mftb(void);
void fn_82D7A510(hkpBoxBoxCollisionDetection *self, hkpBoxBoxManifold *manifold);
}

static __forceinline void TimerBegin(const char *name)
{
    ProfTls_82D67EF8 *t = (ProfTls_82D67EF8 *)KeTlsGetValue(lbl_8323B4A0);
    void **p = t->cur;
    if (p < t->end) {
        p[0] = (void *)name;
        p[1] = (void *)(unsigned int)__mftb();
        t->cur = p + 3;
    }
}

extern "C" char *fn_82D67EF8(const hkpAgent3ProcessInput *input, hkpAgentEntry *entry, char *agentData,
                             hkVector4 *separatingNormal, void *result)
{
    TimerBegin("TtBoxBox3");

    hkpBoxBoxManifold *manifold = (hkpBoxBoxManifold *)agentData;
    const hkpBoxShape *boxA = input->m_bodyA->m_shape;
    const hkpBoxShape *boxB = input->m_bodyB->m_shape;

    hkVector4 rA;
    {
        hkVector4 r;
        r.setAll(boxA->m_radius);
        rA.setAdd4(boxA->m_halfExtents, r);
    }
    hkVector4 rB;
    {
        hkVector4 r;
        r.setAll(boxB->m_radius);
        rB.setAdd4(boxB->m_halfExtents, r);
    }

    hkpBoxBoxCollisionDetection detector(*input->m_bodyA, *input->m_bodyB, input->m_input,
        input->m_contactMgr, result, input->m_aTb, input->m_bodyA->getTransform(), rA,
        input->m_bodyB->getTransform(), rB, input->m_input->m_tolerance);
    fn_82D7A510(&detector, manifold);
    entry->m_numContactPoints = manifold->m_numPoints;

    TimerBegin("Et");
    return agentData + sizeof(hkpBoxBoxManifold);
}
