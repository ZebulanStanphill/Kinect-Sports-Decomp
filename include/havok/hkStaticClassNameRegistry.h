#ifndef HAVOK_HKSTATICCLASSNAMEREGISTRY_H
#define HAVOK_HKSTATICCLASSNAMEREGISTRY_H

#include "havok/hkClassNameRegistry.h"

// hkStaticClassNameRegistry (Common/Serialize/Util/hkStaticClassNameRegistry.h, 0x18 bytes):
// a fixed, null-terminated list of classes.
class hkStaticClassNameRegistry : public hkClassNameRegistry {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkStaticClassNameRegistry(hkClass *const *classes, int classVersion, const char *name);
    hkStaticClassNameRegistry(const hkClass *const *classes, int classVersion, const char *name);
    virtual const char *getName() const;
    virtual const hkClass *getClassByName(const char *className) const;
    virtual void getClasses(hkArray<const hkClass *> &classesOut) const;

    const char *m_name;               // +0x8
    hkClass *const *m_classes;        // +0xC
    int m_classVersion;               // +0x10
    mutable hkUint32 m_ready;         // +0x14 (stored as a word: hkBool32)
};

#endif
