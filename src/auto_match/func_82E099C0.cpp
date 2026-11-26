// hkVtableClassRegistry scalar deleting destructor: implicit destructor (the hkPointerMap member), then the class allocator. The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkSingleton.h"

class hkVtableClassRegistry : public hkReferencedObject, public hkSingleton<hkVtableClassRegistry> {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkVtableClassRegistry() {}

    hkPointerMap<const void *, const hkClass *> m_map;   // +0x8
};

void emitVtable_82E099C0(void *p) { new (p) hkVtableClassRegistry; }
