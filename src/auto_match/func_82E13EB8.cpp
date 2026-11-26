// hkVersionRegistry: merges a class registry, validated, into the registry of its version.
#include "havok/hkBase.h"
#include "havok/ValidatedClassNameRegistry.h"

struct StringMap_82E13EB8 {
    hkCachedHashMap<hkStringMapOperations> m_map;
    int m_alloc;
};

enum hkResult { HK_SUCCESS = 0, HK_FAILURE = 1 };
class hkVersionRegistry;
// hkVersionRegistry::getDynamicClassNameRegistry
extern "C" hkDynamicClassNameRegistry *fn_82E13B70(hkVersionRegistry *self, const char *versionString);

extern "C" hkResult fn_82E13EB8(hkVersionRegistry *self, const hkClassNameRegistry *classRegistry)
{
    hkDynamicClassNameRegistry *registry = fn_82E13B70(self, classRegistry->getName());
    registry->merge(ValidatedClassNameRegistry(classRegistry));
    return HK_SUCCESS;
}
