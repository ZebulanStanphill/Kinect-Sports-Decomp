#ifndef HAVOK_HKVTABLECLASSREGISTRY_H
#define HAVOK_HKVTABLECLASSREGISTRY_H

#include "havok/hkMap.h"
#include "havok/hkSingleton.h"

// hkVtableClassRegistry (Common/Base/Reflection/Registry/hkVtableClassRegistry.h).
// hkSingleton<hkVtableClassRegistry>::s_instance is lbl_832654EC, named in its
// hkSingletonInitNode record. It keeps its lbl_ name (Matching C units read
// it) and is reached through instanceRef().
// 0x14 bytes
class hkVtableClassRegistry : public hkReferencedObject, public hkSingleton<hkVtableClassRegistry> {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkVtableClassRegistry();

    hkPointerMap<const void *, const hkClass *> m_map;   // +0x8 (constructor: empty, then reserve(heap, 0))
};

extern "C" {
extern hkVtableClassRegistry *lbl_832654EC;        // hkSingleton<hkVtableClassRegistry>::s_instance
}
template <> HK_FORCE_INLINE hkVtableClassRegistry *&hkSingleton<hkVtableClassRegistry>::instanceRef() { return lbl_832654EC; }

#endif
