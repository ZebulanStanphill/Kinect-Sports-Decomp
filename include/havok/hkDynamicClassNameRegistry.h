#ifndef HAVOK_HKDYNAMICCLASSNAMEREGISTRY_H
#define HAVOK_HKDYNAMICCLASSNAMEREGISTRY_H

#include "havok/hkClassNameRegistry.h"

#include "havok/hkStringMapC.h"

// hkDynamicClassNameRegistry (0x1C bytes)
class hkDynamicClassNameRegistry : public hkClassNameRegistry {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    HK_FORCE_INLINE hkDynamicClassNameRegistry(const char *name = HK_NULL) : m_name(name) {}
    virtual const char *getName() const;
    virtual const hkClass *getClassByName(const char *className) const;
    virtual void getClasses(hkArray<const hkClass *> &classesOut) const;

    virtual void vf18();
    virtual void registerClass(const hkClass *klass, const char *name = HK_NULL);
    virtual void registerList(const hkClass *const *classes);
    virtual void merge(const hkClassNameRegistry &mergeFrom);
    virtual void registerList(const hkStringMap<const hkClass *> &classes);

    const char *m_name;                    // +0x8
    hkStringMapC<const hkClass *> m_map;   // +0xC
};

#endif
