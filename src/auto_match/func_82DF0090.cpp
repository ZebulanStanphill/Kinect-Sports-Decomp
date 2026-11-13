// hkpDashpotAction::applyAction(const hkStepInfo &) (Physics/Utilities/Actions/Dashpot):
// the two attachment points in world space, a spring impulse from their separation and a
// damping impulse from the bodies' velocity difference (both scaled by the time step),
// applied to body A negated and to body B as is. Wrapped in the "TtDashpot" timer scope.
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
typedef __vector4 hkQuadReal;

extern "C" {
__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
}

extern "C" unsigned __int64 __mftb();
struct hkMonitorStream { void *a; unsigned *next; void *b; unsigned *end; };
extern "C" hkMonitorStream *KeTlsGetValue(unsigned);
extern "C" unsigned lbl_8323B4A0;
static HK_FORCE_INLINE void timer(const char *s)
{
    hkMonitorStream *t = KeTlsGetValue(lbl_8323B4A0);
    unsigned *p = t->next;
    if (p < t->end) {
        p[0] = (unsigned)s;
        p[1] = (unsigned)__mftb();
        t->next = p + 3;
    }
}

class hkSimdReal {
public:
    HK_FORCE_INLINE hkSimdReal(const float &x) { m_real = __vspltw(__lvlx(&x, 0), 0); }
    hkQuadReal m_real;
};

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    HK_FORCE_INLINE void setSub4(const hkVector4 &a, const hkVector4 &b) { m_quad = __vsubfp(a.m_quad, b.m_quad); }
    HK_FORCE_INLINE void setMul4(const hkSimdReal &s, const hkVector4 &a) { m_quad = __vmulfp(a.m_quad, s.m_real); }
    HK_FORCE_INLINE void addMul4(const hkSimdReal &s, const hkVector4 &a) { m_quad = __vmaddfp(a.m_quad, s.m_real, m_quad); }
    hkQuadReal m_quad;
};

class hkTransform {
public:
    hkVector4 m_rotation[3];
    hkVector4 m_translation;
};

struct hkStepInfo {
    hkReal m_startTime;
    hkReal m_endTime;
    hkReal m_deltaTime;     // +0x8
    hkReal m_invDeltaTime;
};

class hkpMotion {
public:
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3c();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4c();
    virtual void applyPointImpulse(const hkVector4 &imp, const hkVector4 &p);   // +0x50
    hkTransform m_transform;        // +0x10 (body +0xf0)
    char m_pad50[0x80];
    hkVector4 m_linearVelocity;     // +0xd0 (body +0x1b0)
};

class hkpRigidBody {
public:
    char m_pad0[0xe0];
    hkpMotion m_motion;             // +0xe0
    HK_FORCE_INLINE const hkTransform &getTransform() const { return m_motion.m_transform; }
    HK_FORCE_INLINE const hkVector4 &getLinearVelocity() const { return m_motion.m_linearVelocity; }
    HK_FORCE_INLINE void applyPointImpulse(const hkVector4 &imp, const hkVector4 &p);
};

extern "C" {
void fn_82CE5040(hkVector4 *out, const hkTransform &t, const hkVector4 &v);   // setTransformedPos
void fn_82D89BD8(hkpRigidBody *body);   // hkpEntity::activate
}
extern "C" const float lbl_821456B0;

HK_FORCE_INLINE void hkpRigidBody::applyPointImpulse(const hkVector4 &imp, const hkVector4 &p)
{
    fn_82D89BD8(this);
    m_motion.applyPointImpulse(imp, p);
}

struct hkpDashpotAction {
    char m_pad0[0x18];
    hkpRigidBody *m_entityA;        // +0x18
    hkpRigidBody *m_entityB;        // +0x1c
    hkVector4 m_point[2];           // +0x20
    hkReal m_strength;              // +0x40
    hkReal m_damping;               // +0x44
    char m_pad48[8];
    hkVector4 m_impulse;            // +0x50
};

extern "C" void fn_82DF0090(hkpDashpotAction *self, const hkStepInfo &stepInfo)
{
    timer("TtDashpot");

    hkpRigidBody *ra = self->m_entityA;
    hkpRigidBody *rb = self->m_entityB;
    const hkReal dt = stepInfo.m_deltaTime * lbl_821456B0;

    hkVector4 pa;
    fn_82CE5040(&pa, ra->getTransform(), self->m_point[0]);
    hkVector4 pb;
    fn_82CE5040(&pb, rb->getTransform(), self->m_point[1]);

    hkVector4 dir;
    dir.setSub4(pa, pb);
    hkVector4 relVel;
    relVel.setSub4(ra->getLinearVelocity(), rb->getLinearVelocity());
    self->m_impulse.setMul4(self->m_strength * dt, dir);
    self->m_impulse.addMul4(self->m_damping * dt, relVel);

    hkVector4 negImpulse;
    negImpulse.setMul4(-1.0f, self->m_impulse);
    ra->applyPointImpulse(negImpulse, pa);
    rb->applyPointImpulse(self->m_impulse, pb);

    timer("Et");
}
