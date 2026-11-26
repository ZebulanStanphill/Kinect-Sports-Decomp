// hkpDashpotAction::applyAction(const hkStepInfo &) (Physics/Utilities/Actions/Dashpot):
// the two attachment points in world space, a spring impulse from their separation and a
// damping impulse from the bodies' velocity difference (both scaled by the time step),
// applied to body A negated and to body B as is. Wrapped in the "TtDashpot" timer scope.
#include "havok/hkBase.h"
#include "havok/hkpRigidBody.h"

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

struct hkStepInfo {
    hkReal m_startTime;
    hkReal m_endTime;
    hkReal m_deltaTime;     // +0x8
    hkReal m_invDeltaTime;
};

extern "C" const float lbl_821456B0;

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
    pa.setTransformedPos(ra->getTransform(), self->m_point[0]);
    hkVector4 pb;
    pb.setTransformedPos(rb->getTransform(), self->m_point[1]);

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
