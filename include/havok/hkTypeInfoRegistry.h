#ifndef HAVOK_HKTYPEINFOREGISTRY_H
#define HAVOK_HKTYPEINFOREGISTRY_H

#include "havok/hkStringMapC.h"
#include "havok/hkSingleton.h"

// hkTypeInfoRegistry (Common/Base/Reflection/Registry/hkTypeInfoRegistry.h).
// hkSingleton<hkTypeInfoRegistry>::s_instance is lbl_832654E8, named in its
// hkSingletonInitNode record. It keeps its lbl_ name (Matching C units read
// it) and is reached through instanceRef().
class hkTypeInfo;

// 0x18 bytes
class hkTypeInfoRegistry : public hkReferencedObject, public hkSingleton<hkTypeInfoRegistry> {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkTypeInfoRegistry() {}

    hkStringMapC<const hkTypeInfo *> m_map;   // +0x8
};

extern "C" {
extern hkTypeInfoRegistry *lbl_832654E8;           // hkSingleton<hkTypeInfoRegistry>::s_instance
}
template <> HK_FORCE_INLINE hkTypeInfoRegistry *&hkSingleton<hkTypeInfoRegistry>::instanceRef() { return lbl_832654E8; }

#endif
