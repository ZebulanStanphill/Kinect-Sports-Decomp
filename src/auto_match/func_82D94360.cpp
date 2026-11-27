// hkpPhysicsSystem::removeAll() (Physics/Utilities/Serialize/hkpPhysicsSystem.cpp): releases every rigid
// body, phantom, constraint and action the system holds (null entries are skipped) and empties the four
// arrays, keeping their storage. The destructor calls it.
#include "havok/hkBase.h"
#include "havok/hkpPhysicsSystem.h"

void hkpPhysicsSystem::removeAll()
{
    {
        int n = m_rigidBodies.getSize();
        for (int i = 0; i < n; ++i) {
            if (m_rigidBodies[i]) reinterpret_cast<hkReferencedObject *>(m_rigidBodies[i])->removeReference();
        }
        m_rigidBodies.m_size = 0;
    }
    {
        int n = m_phantoms.getSize();
        for (int i = 0; i < n; ++i) {
            if (m_phantoms[i]) reinterpret_cast<hkReferencedObject *>(m_phantoms[i])->removeReference();
        }
        m_phantoms.m_size = 0;
    }
    {
        int n = m_constraints.getSize();
        for (int i = 0; i < n; ++i) {
            if (m_constraints[i]) reinterpret_cast<hkReferencedObject *>(m_constraints[i])->removeReference();
        }
        m_constraints.m_size = 0;
    }
    {
        int n = m_actions.getSize();
        for (int i = 0; i < n; ++i) {
            if (m_actions[i]) reinterpret_cast<hkReferencedObject *>(m_actions[i])->removeReference();
        }
        m_actions.m_size = 0;
    }
}
