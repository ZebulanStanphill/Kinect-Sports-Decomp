// hkChainedClassNameRegistry's scalar deleting destructor. The destructor is defined in the same file
// (hkChainedClassNameRegistry.cpp, 82E17470), so the deleting destructor the compiler generates inlines it.
#include "havok/hkBase.h"
#include "havok/hkChainedClassNameRegistry.h"

hkChainedClassNameRegistry::~hkChainedClassNameRegistry()
{
    if (m_nextRegistry)
        m_nextRegistry->removeReferenceLockUnchecked();
}
