// hkpGskfAgent::commitPotential (+0x30): gives the first manifold point without an id the new id.
#include "havok/hkpGskfAgent.h"

void hkpGskfAgent::commitPotential(hkContactPointId newId)
{
    for (int i = 0; i < m_manifold.m_numContactPoints; i++) {
        if (m_manifold.m_contactPoints[i].m_id == HK_INVALID_CONTACT_POINT) {
            m_manifold.m_contactPoints[i].m_id = newId;
            return;
        }
    }
}
