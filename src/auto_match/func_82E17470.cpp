// hkChainedClassNameRegistry::~hkChainedClassNameRegistry() (Common/Serialize/Util/hkChainedClassNameRegistry.cpp).
#include "havok/hkBase.h"
#include "havok/hkChainedClassNameRegistry.h"

hkChainedClassNameRegistry::~hkChainedClassNameRegistry()
{
    if (m_nextRegistry)
        m_nextRegistry->removeReferenceLockUnchecked();
}
