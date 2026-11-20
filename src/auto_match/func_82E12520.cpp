#include "havok/hkRenamedClassNameRegistry.h"

void hkRenamedClassNameRegistry::registerRenames(const hkVersionRegistryClassRename *renames)
{
    if (renames) {
        for (const hkVersionRegistryClassRename *r = renames; r->oldName != HK_NULL; ++r)
            m_renames.insert(r->oldName, r->newName);
    }
}
