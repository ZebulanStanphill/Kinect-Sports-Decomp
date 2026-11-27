// hkpHeightFieldAgent::cleanup (+0x1C of hkpHeightFieldAgent's and hkpSymmetricAgent<hkpHeightFieldAgent>'s
// vtables): with a contact manager, removes every valid contact point (the manager's slot +0x14,
// removeContactPoint; hkpContactMgr.h declares no virtual functions), then deletes the agent.
#include "havok/hkpHeightFieldAgent.h"

typedef void (*RemoveContactPointFunc)(hkpContactMgr *mgr, hkContactPointId id,
                                       hkCollisionConstraintOwner &constraintOwner);

void hkpHeightFieldAgent::cleanup(hkCollisionConstraintOwner &constraintOwner)
{
    if (m_contactMgr) {
        for (int i = 0; i < m_contactPointId.getSize(); i++) {
            if (m_contactPointId[i] != HK_INVALID_CONTACT_POINT) {
                (*(RemoveContactPointFunc **)m_contactMgr)[5](m_contactMgr, m_contactPointId[i], constraintOwner);
            }
        }
    }
    delete this;
}
