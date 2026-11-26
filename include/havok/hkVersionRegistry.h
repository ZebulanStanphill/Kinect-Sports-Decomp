#ifndef HAVOK_HKVERSIONREGISTRY_H
#define HAVOK_HKVERSIONREGISTRY_H

#include "havok/hkDynamicClassNameRegistry.h"

// hkVersionRegistry (Common/Serialize/Version/hkVersionRegistry.h, 0x24 bytes).
struct hkVersionRegistryUpdater;
extern "C" hkVersionRegistryUpdater *lbl_832760A0[];   // hkVersionRegistry::StaticLinkedUpdaters (null-terminated)

// The updater list points at the static, null-terminated array: hkArray's
// user-buffer constructor (size, capacity, DONT_DEALLOCATE_FLAG).
template <typename T>
class hkArrayUserBuffer : public hkArray<T> {
public:
    HK_FORCE_INLINE hkArrayUserBuffer(T *buffer, int size, int capacity) : hkArray<T>(hkFinishLoadedObjectFlag())
    {
        this->m_data = buffer;
        this->m_size = size;
        this->m_capacityAndFlags = capacity | hkArrayBase<T>::DONT_DEALLOCATE_FLAG;
    }
};

class hkVersionRegistry : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    typedef hkVersionRegistryUpdater Updater;
    hkVersionRegistry();
    virtual ~hkVersionRegistry();

    static HK_FORCE_INLINE int countStaticUpdaters()
    {
        int n = 0;
        for (Updater *const *p = lbl_832760A0; *p; ++p)
            ++n;
        return n;
    }

    hkArrayUserBuffer<const Updater *> m_updaters;                                 // +0x8
    hkStringMapC<hkDynamicClassNameRegistry *> m_versionToClassNameRegistry;     // +0x14
};

#endif
