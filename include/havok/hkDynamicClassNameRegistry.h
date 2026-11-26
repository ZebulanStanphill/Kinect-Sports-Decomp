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

    // The slots are those of ??_7hkDynamicClassNameRegistry@@6B@. The last
    // function registers every class of a string map (it calls registerClass
    // for each); it is not named registerList here because the compiler puts
    // overloads in adjacent slots, which would move merge to +0x28.
    virtual void vf18();                                                             // +0x18
    virtual void registerClass(const hkClass *klass, const char *name = HK_NULL);   // +0x1C
    virtual void registerList(const hkClass *const *classes);                        // +0x20
    virtual void merge(const hkClassNameRegistry &mergeFrom);                        // +0x24
    virtual void vf28(const hkStringMap<const hkClass *> &classes);                  // +0x28

    const char *m_name;                    // +0x8
    hkStringMapC<const hkClass *> m_map;   // +0xC
};

#endif
