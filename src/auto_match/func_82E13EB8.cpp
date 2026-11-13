// hkVersionRegistry: merges a class registry, validated, into the registry of its version.
#include "havok/hkBase.h"

class hkClassNameRegistry : public hkReferencedObject {
public:
    virtual const char *getName() const;                                   // +0x0C
    virtual const void *getClassByName(const char *className) const;      // +0x10
    virtual void getClasses(void *classes) const;                          // +0x14
    virtual void setName(const char *name);                                // +0x18
    virtual void registerClass(const void *klass, const char *name);      // +0x1C
    virtual void registerList(const void *const *classes);                // +0x20
    virtual void merge(const hkClassNameRegistry &mergeFrom);             // +0x24
};

extern "C" void fn_82D003F0(void *map);   // hkStringMap destructor

struct StringMap_82E13EB8 {
    int m_data[4];
    HK_FORCE_INLINE ~StringMap_82E13EB8() { fn_82D003F0(this); }
};

class hkDynamicClassNameRegistry : public hkClassNameRegistry {
public:
    const char *m_name;
    StringMap_82E13EB8 m_map;   // +0x0C
};

class ValidatedClassNameRegistry : public hkDynamicClassNameRegistry {
public:
    ValidatedClassNameRegistry(const hkClassNameRegistry *classRegistry);
};

enum hkResult { HK_SUCCESS = 0, HK_FAILURE = 1 };
class hkVersionRegistry;
extern "C" hkClassNameRegistry *fn_82E13B70(hkVersionRegistry *self, const char *versionString);

extern "C" hkResult fn_82E13EB8(hkVersionRegistry *self, const hkClassNameRegistry *classRegistry)
{
    hkClassNameRegistry *registry = fn_82E13B70(self, classRegistry->getName());
    registry->merge(ValidatedClassNameRegistry(classRegistry));
    return HK_SUCCESS;
}
