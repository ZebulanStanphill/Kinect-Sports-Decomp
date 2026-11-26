// hkVersionRegistry::~hkVersionRegistry() (user-written): releases the per-version registries (lock-free removeReference), clears the map; then the members.
#include "havok/hkBase.h"
#include "havok/hkVersionRegistry.h"

hkVersionRegistry::~hkVersionRegistry()
{
    for (hkStringMapC<hkDynamicClassNameRegistry *>::Iterator it = m_versionToClassNameRegistry.getIterator();
         m_versionToClassNameRegistry.isValid(it); it = m_versionToClassNameRegistry.getNext(it)) {
        m_versionToClassNameRegistry.getValue(it)->removeReferenceLockUnchecked();
    }
    m_versionToClassNameRegistry.clear();
}
