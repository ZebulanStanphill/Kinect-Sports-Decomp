// hkRenamedClassNameRegistry::hkRenamedClassNameRegistry(renames, originalRegistry): takes a reference to the original registry (released first if one was set), then registers the renames (registerRenames). Parameter types are guesses.
#include "havok/hkBase.h"
#include "havok/hkRenamedClassNameRegistry.h"

hkRenamedClassNameRegistry::hkRenamedClassNameRegistry(const hkVersionRegistryClassRename *renames, const hkClassNameRegistry *originalRegistry)
    : m_originalRegistry(HK_NULL)
{
    if (originalRegistry)
        originalRegistry->addReference();
    if (m_originalRegistry)
        m_originalRegistry->removeReference();
    m_originalRegistry = originalRegistry;
    registerRenames(renames);
}
