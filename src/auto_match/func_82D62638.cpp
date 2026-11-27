// hkpCapsuleTriangleAgent::cleanup (+0x1C of hkpCapsuleTriangleAgent's and hkpSymmetricAgentLinearCast<hkpCapsuleTriangleAgent>'s vtables):
// removes its contact points from the contact manager (the manager's slot +0x14, removeContactPoint;
// hkpContactMgr.h declares no virtual functions), then deletes the agent.
#include "havok/hkpCapsuleTriangleAgent.h"

typedef void (*RemoveContactPointFunc)(hkpContactMgr *mgr, hkContactPointId id,
                                       hkCollisionConstraintOwner &constraintOwner);

void hkpCapsuleTriangleAgent::cleanup(hkCollisionConstraintOwner &constraintOwner)
{
    for (int i = 0; i < 3; i++) {
        if (m_contactPointId[i] != HK_INVALID_CONTACT_POINT) {
            (*(RemoveContactPointFunc **)m_contactMgr)[5](m_contactMgr, m_contactPointId[i], constraintOwner);
        }
    }
    delete this;
}
