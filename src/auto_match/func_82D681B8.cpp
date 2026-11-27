// hkpBoxBoxAgent::cleanup (+0x1C of ??_7hkpBoxBoxAgent@@6B@): removes the manifold's contact points from the
// contact manager (the manager's slot +0x14, removeContactPoint; hkpContactMgr.h declares no virtual functions),
// then deletes the agent (the second half-word of each manifold point is its contact point id).
#include "havok/hkpBoxBoxAgent.h"

typedef void (*RemoveContactPointFunc)(hkpContactMgr *mgr, hkContactPointId id,
                                       hkCollisionConstraintOwner &constraintOwner);

void hkpBoxBoxAgent::cleanup(hkCollisionConstraintOwner &constraintOwner)
{
    for (int i = 0; i < m_manifold.m_numPoints; i++) {
        hkContactPointId id = m_manifold.m_contactPoints[i].m_data2;
        (*(RemoveContactPointFunc **)m_contactMgr)[5](m_contactMgr, id, constraintOwner);
    }
    delete this;
}
