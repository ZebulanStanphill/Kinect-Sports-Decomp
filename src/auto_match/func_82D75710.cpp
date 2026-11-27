// hkpGskfAgent::removePoint (+0x2C): removes the manifold's contact point with the given id
// (fn_82DD8618, Havok's hkGskManifold_removePoint).
#include "havok/hkpGskfAgent.h"

extern "C" void fn_82DD8618(hkpGskManifold *manifold, int index);

void hkpGskfAgent::removePoint(hkContactPointId idToRemove)
{
    for (int i = 0; i < m_manifold.m_numContactPoints; i++) {
        if (m_manifold.m_contactPoints[i].m_id == idToRemove) {
            fn_82DD8618(&m_manifold, i);
            return;
        }
    }
}
