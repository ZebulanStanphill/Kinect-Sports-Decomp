#ifndef HAVOK_HKCHAINEDCLASSNAMEREGISTRY_H
#define HAVOK_HKCHAINEDCLASSNAMEREGISTRY_H

#include "havok/hkDynamicClassNameRegistry.h"

// hkChainedClassNameRegistry (Common/Serialize/Util/hkChainedClassNameRegistry.h, 0x20 bytes). The next registry is referenced
// with the locked addReference (fn_82CE4040) and released with the lock-free
// removeReference (fn_82CE3E48), without clearing the pointer, so it is a
// plain pointer here. Its destructor is user-written and out of line,
// fn_82E17470.
class hkChainedClassNameRegistry : public hkDynamicClassNameRegistry {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkChainedClassNameRegistry(const hkClassNameRegistry *nextRegistry);
    HK_FORCE_INLINE virtual ~hkChainedClassNameRegistry()
    {
        if (m_nextRegistry)
            m_nextRegistry->removeReferenceLockUnchecked();
    }
    virtual const hkClass *getClassByName(const char *className) const;
    virtual void getClasses(hkArray<const hkClass *> &classesOut) const;

    const hkClassNameRegistry *m_nextRegistry;     // +0x1C
};

#endif
