#ifndef HAVOK_HKRENAMEDCLASSNAMEREGISTRY_H
#define HAVOK_HKRENAMEDCLASSNAMEREGISTRY_H

#include "havok/hkClassNameRegistry.h"

#include "havok/hkStringMapC.h"

// hkRenamedClassNameRegistry (Common/Serialize/Util/hkRenamedClassNameRegistry.h,
// 0x1C bytes). The original registry is referenced with the locked
// add/removeReference and not cleared by the destructor, so it is a plain
// pointer here (the shared hkRefPtr clears it).
struct hkVersionRegistryClassRename {
    const char *oldName;
    const char *newName;
};
class hkRenamedClassNameRegistry : public hkClassNameRegistry {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    hkRenamedClassNameRegistry(const hkVersionRegistryClassRename *renames, const hkClassNameRegistry *originalRegistry);
    HK_FORCE_INLINE virtual ~hkRenamedClassNameRegistry()
    {
        if (m_originalRegistry)
            m_originalRegistry->removeReference();
    }
    void registerRenames(const hkVersionRegistryClassRename *renames);
    virtual const char *getName() const;
    virtual const hkClass *getClassByName(const char *className) const;
    virtual void getClasses(hkArray<const hkClass *> &classesOut) const;

    hkStringMapC<const char *> m_renames;               // +0x8
    const hkClassNameRegistry *m_originalRegistry;      // +0x18
};

#endif
