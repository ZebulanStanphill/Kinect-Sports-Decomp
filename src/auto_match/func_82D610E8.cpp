// hkpMultiSphereTriangleAgent::cleanup (+0x1C of hkpMultiSphereTriangleAgent's and
// hkpSymmetricAgentLinearCast<hkpMultiSphereTriangleAgent>'s vtables): removes its eight contact points from the
// contact manager (the manager's slot +0x14, removeContactPoint; hkpContactMgr.h declares no virtual functions),
// then deletes the agent.
#include "havok/hkpMultiSphereTriangleAgent.h"

typedef void (*RemoveContactPointFunc)(hkpContactMgr *mgr, hkContactPointId id,
                                       hkCollisionConstraintOwner &constraintOwner);

void hkpMultiSphereTriangleAgent::cleanup(hkCollisionConstraintOwner &constraintOwner)
{
    for (int i = 0; i < HK_MAX_NUM_SPHERES_IN_MULTISPHERE; i++) {
        if (m_contactPointId[i] != HK_INVALID_CONTACT_POINT) {
            (*(RemoveContactPointFunc **)m_contactMgr)[5](m_contactMgr, m_contactPointId[i], constraintOwner);
        }
    }
    delete this;
}
