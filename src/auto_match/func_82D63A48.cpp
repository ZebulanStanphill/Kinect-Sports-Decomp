// hkpCapsuleCapsuleAgent::cleanup (+0x1C of ??_7hkpCapsuleCapsuleAgent@@6B@): removes its three contact points
// from the contact manager (the manager's slot +0x14, removeContactPoint; hkpContactMgr.h declares no virtual
// functions), then deletes the agent.
#include "havok/hkpCapsuleCapsuleAgent.h"

typedef void (*RemoveContactPointFunc)(hkpContactMgr *mgr, hkContactPointId id,
                                       hkCollisionConstraintOwner &constraintOwner);

void hkpCapsuleCapsuleAgent::cleanup(hkCollisionConstraintOwner &constraintOwner)
{
    for (int i = 0; i < 3; i++) {
        if (m_contactPointId[i] != HK_INVALID_CONTACT_POINT) {
            (*(RemoveContactPointFunc **)m_contactMgr)[5](m_contactMgr, m_contactPointId[i], constraintOwner);
        }
    }
    delete this;
}
