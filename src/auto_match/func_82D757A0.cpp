// hkpGskfAgent::createZombie (+0x34): clears the dimensions of the manifold point with the given id.
#include "havok/hkpGskfAgent.h"

void hkpGskfAgent::createZombie(hkContactPointId idTobeZombified)
{
    for (int i = 0; i < m_manifold.m_numContactPoints; i++) {
        hkpGskManifold::ContactPoint &cp = m_manifold.m_contactPoints[i];
        if (cp.m_id == idTobeZombified) {
            cp.m_dimA = 0;
            cp.m_dimB = 0;
            return;
        }
    }
}
