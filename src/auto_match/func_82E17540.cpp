// hkChainedClassNameRegistry::hkChainedClassNameRegistry(const hkClassNameRegistry *nextRegistry) (hkChainedClassNameRegistry.cpp).
#include "havok/hkBase.h"
#include "havok/hkBindingClassNameRegistry.h"

hkChainedClassNameRegistry::hkChainedClassNameRegistry(const hkClassNameRegistry *nextRegistry)
{
    m_nextRegistry = nextRegistry;
    if (nextRegistry)
        nextRegistry->addReference();
}
