// hkpMultiRayConvexAgent::cleanup (+0x1C of hkpMultiRayConvexAgent's and
// hkpSymmetricAgentLinearCast<hkpMultiRayConvexAgent>'s vtables): removes every valid contact point from the
// contact manager (its slot +0x14, removeContactPoint; hkpContactMgr.h declares no virtual functions), then
// deletes the agent.
#include "havok/hkpMultiRayConvexAgent.h"

typedef void (*RemoveContactPointFunc)(hkpContactMgr *mgr, hkContactPointId id,
                                       hkCollisionConstraintOwner &constraintOwner);

void hkpMultiRayConvexAgent::cleanup(hkCollisionConstraintOwner &constraintOwner)
{
    int numIds = m_contactInfo.getSize();
    for (int i = 0; i < numIds; i++) {
        if (m_contactInfo[i].m_contactPointId != HK_INVALID_CONTACT_POINT) {
            (*(RemoveContactPointFunc **)m_contactMgr)[5](m_contactMgr, m_contactInfo[i].m_contactPointId,
                                                          constraintOwner);
        }
    }
    delete this;
}
