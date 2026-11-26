#ifndef HAVOK_VALIDATEDCLASSNAMEREGISTRY_H
#define HAVOK_VALIDATEDCLASSNAMEREGISTRY_H

#include "havok/hkDynamicClassNameRegistry.h"

// ValidatedClassNameRegistry (hkVersionUtil? 0x1C bytes): a dynamic registry
// that starts as a copy of another one (hkDynamicClassNameRegistry::merge,
// vtable slot 9, called directly from the constructor).
class ValidatedClassNameRegistry : public hkDynamicClassNameRegistry {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    ValidatedClassNameRegistry(const hkClassNameRegistry *classRegistry);
    virtual const hkClass *getClassByName(const char *className) const;
};

#endif
