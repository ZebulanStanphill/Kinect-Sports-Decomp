// hkxEnum's scalar deleting destructor (Common/SceneData/Attributes/hkxEnum.h): it calls the implicit
// destructor (fn_82E02700, emitted out of line) and frees through the class allocator. The finish constructor
// below only makes the compiler emit the vtable, and with it the deleting destructor.
#include "havok/hkBase.h"

class hkxEnum : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    struct Item {
        int m_value;            // +0x0
        hkStringPtr m_name;     // +0x4
    };
    hkxEnum(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_items(f) {}

    hkArray<Item> m_items;      // +0x8
};

void emitVtable_82E02828(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxEnum(f); }
