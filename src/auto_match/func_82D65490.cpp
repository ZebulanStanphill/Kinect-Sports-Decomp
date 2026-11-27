// hkpSphereTriangleAgent::cleanup (+0x1C of hkpSphereTriangleAgent's and hkpSymmetricAgentLinearCast<hkpSphereTriangleAgent>'s vtables):
// removes its contact points from the contact manager (the manager's slot +0x14, removeContactPoint;
// hkpContactMgr.h declares no virtual functions), then deletes the agent.
#include "havok/hkpSphereTriangleAgent.h"

typedef void (*RemoveContactPointFunc)(hkpContactMgr *mgr, hkContactPointId id,
                                       hkCollisionConstraintOwner &constraintOwner);

void hkpSphereTriangleAgent::cleanup(hkCollisionConstraintOwner &constraintOwner)
{
    if (m_contactPointId != HK_INVALID_CONTACT_POINT) {
        (*(RemoveContactPointFunc **)m_contactMgr)[5](m_contactMgr, m_contactPointId, constraintOwner);
    }
    delete this;
}
