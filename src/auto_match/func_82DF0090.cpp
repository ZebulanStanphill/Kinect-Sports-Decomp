// hkpDashpotAction::applyAction(const hkStepInfo &) (Physics/Utilities/Actions/Dashpot):
// the two attachment points in world space, a spring impulse from their separation and a
// damping impulse from the bodies' velocity difference (both scaled by the time step),
// applied to body A negated and to body B as is. Wrapped in the "TtDashpot" timer scope.
// Slot +0xC of ??_7hkpDashpotAction@@6B@.
#include "havok/hkMonitorStream.h"
#include "havok/hkBase.h"
#include "havok/hkpRigidBody.h"
#include "havok/hkpDashpotAction.h"
#include "havok/hkStepInfo.h"

extern "C" unsigned __int64 __mftb();
static HK_FORCE_INLINE void timer(const char *s)
{
    hkMonitorStream *t = &hkMonitorStream::getInstance();
    if (t->m_end < t->m_capacityMinus16) {
        hkMonitorStream::TimerCommand *p = reinterpret_cast<hkMonitorStream::TimerCommand *>(t->m_end);
        p->m_commandAndMonitor = s;
        p->m_time0 = (hkUint32)__mftb();
        t->m_end = reinterpret_cast<char *>(p + 1);
    }
}

extern "C" const float lbl_821456B0;

void hkpDashpotAction::applyAction(const hkStepInfo &stepInfo)
{
    timer("TtDashpot");

    hkpRigidBody *ra = static_cast<hkpRigidBody *>(m_entityA);
    hkpRigidBody *rb = static_cast<hkpRigidBody *>(m_entityB);
    const hkReal dt = stepInfo.m_deltaTime * lbl_821456B0;

    hkVector4 pa;
    pa.setTransformedPos(ra->getTransform(), m_point[0]);
    hkVector4 pb;
    pb.setTransformedPos(rb->getTransform(), m_point[1]);

    hkVector4 dir;
    dir.setSub4(pa, pb);
    hkVector4 relVel;
    relVel.setSub4(ra->getLinearVelocity(), rb->getLinearVelocity());
    m_impulse.setMul4(m_strength * dt, dir);
    m_impulse.addMul4(m_damping * dt, relVel);

    hkVector4 negImpulse;
    negImpulse.setMul4(-1.0f, m_impulse);
    ra->applyPointImpulse(negImpulse, pa);
    rb->applyPointImpulse(m_impulse, pb);

    timer("Et");
}
