// hkpSphereCapsuleAgent::cleanup (+0x1C of hkpSphereCapsuleAgent's and hkpSymmetricAgentLinearCast<hkpSphereCapsuleAgent>'s vtables):
// removes the contact point from the contact manager when there is one (the manager's slot +0x14,
// removeContactPoint; hkpContactMgr.h declares no virtual functions), then deletes the agent.
#include "havok/hkpSphereCapsuleAgent.h"

typedef void (*RemoveContactPointFunc)(hkpContactMgr *mgr, hkContactPointId id,
                                       hkCollisionConstraintOwner &constraintOwner);

void hkpSphereCapsuleAgent::cleanup(hkCollisionConstraintOwner &constraintOwner)
{
    if (m_contactPointId != HK_INVALID_CONTACT_POINT) {
        (*(RemoveContactPointFunc **)m_contactMgr)[5](m_contactMgr, m_contactPointId, constraintOwner);
    }
    delete this;
}
