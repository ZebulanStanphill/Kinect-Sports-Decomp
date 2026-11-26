// hkVersionRegistry: merges a class registry, validated, into the registry of its version.
#include "havok/hkBase.h"
#include "havok/hkClassNameRegistry.h"

struct StringMap_82E13EB8 {
    hkCachedHashMap<hkStringMapOperations> m_map;
    int m_alloc;
};

class hkDynamicClassNameRegistry : public hkClassNameRegistry {
public:
    virtual void setName(const char *name);                                 // +0x18
    virtual void registerClass(const hkClass *klass, const char *name);    // +0x1C
    virtual void registerList(const hkClass *const *classes);              // +0x20
    virtual void merge(const hkClassNameRegistry &mergeFrom);              // +0x24

    const char *m_name;
    StringMap_82E13EB8 m_map;   // +0x0C
};

class ValidatedClassNameRegistry : public hkDynamicClassNameRegistry {
public:
    ValidatedClassNameRegistry(const hkClassNameRegistry *classRegistry);
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
