#ifndef HAVOK_HKDEFAULTCLASSNAMEREGISTRY_H
#define HAVOK_HKDEFAULTCLASSNAMEREGISTRY_H

#include "havok/hkDynamicClassNameRegistry.h"
#include "havok/hkSingleton.h"

// hkDefaultClassNameRegistry (Common/Base/Reflection/Registry/hkDefaultClassNameRegistry.h).
// hkSingleton<hkDefaultClassNameRegistry>::s_instance is lbl_832654E4, named in its
// hkSingletonInitNode record. It keeps its lbl_ name (Matching C units read
// it) and is reached through instanceRef().
// hkDefaultClassNameRegistry: the dynamic registry named after the Havok
// version string ("Havok-7.0.0-r1").
class hkDefaultClassNameRegistry : public hkDynamicClassNameRegistry, public hkSingleton<hkDefaultClassNameRegistry> {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkDefaultClassNameRegistry();
};

extern "C" {
extern hkDefaultClassNameRegistry *lbl_832654E4;   // hkSingleton<hkDefaultClassNameRegistry>::s_instance
}
template <> HK_FORCE_INLINE hkDefaultClassNameRegistry *&hkSingleton<hkDefaultClassNameRegistry>::instanceRef() { return lbl_832654E4; }

#endif
