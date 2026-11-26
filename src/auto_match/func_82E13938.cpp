// ValidatedClassNameRegistry::ValidatedClassNameRegistry(const hkClassNameRegistry *classRegistry): an empty dynamic registry, then merge(*classRegistry) when given one.
#include "havok/hkBase.h"
#include "havok/ValidatedClassNameRegistry.h"

ValidatedClassNameRegistry::ValidatedClassNameRegistry(const hkClassNameRegistry *classRegistry)
{
    if (classRegistry)
        hkDynamicClassNameRegistry::merge(*classRegistry);
}
