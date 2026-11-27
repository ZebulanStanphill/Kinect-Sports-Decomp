// hkpGskfAgent::cleanup (+0x1C of hkpGskfAgent's and hkpPredGskfAgent's vtables): removes the manifold's
// contact points from the contact manager (fn_82DD77B0, Havok's hkGskManifold_cleanup), then deletes the agent.
#include "havok/hkpGskfAgent.h"

extern "C" void fn_82DD77B0(hkpGskManifold *manifold, hkpContactMgr *mgr, hkCollisionConstraintOwner &constraintOwner);

void hkpGskfAgent::cleanup(hkCollisionConstraintOwner &constraintOwner)
{
    fn_82DD77B0(&m_manifold, m_contactMgr, constraintOwner);
    delete this;
}
