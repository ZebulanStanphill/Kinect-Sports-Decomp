// hkVersionRegistry scalar deleting destructor: calls the out-of-line,
// user-written ~hkVersionRegistry (fn_82E13A78, ??1hkVersionRegistry@@UAA@XZ),
// then the class allocator's delete. The function at the end only makes the
// compiler emit the vtable.
#include "havok/hkBase.h"

template <typename T>
class hkSingleton {
public:
    static T *s_instance;
};

// Common/Serialize/Version/hkVersionRegistry.h (0x24 bytes; the RTTI places the
// empty hkSingleton base at +0x8)
class hkVersionRegistry : public hkReferencedObject, public hkSingleton<hkVersionRegistry> {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SERIALIZE);
    hkVersionRegistry(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}
    virtual ~hkVersionRegistry();   // out of line (fn_82E13A78)

    hkUint32 m_members[7];   // +0x8: updaters (hkArray), version -> class name registry map
};

void emitVtable_82E14298(void *p, hkFinishLoadedObjectFlag f) { new (p) hkVersionRegistry(f); }
