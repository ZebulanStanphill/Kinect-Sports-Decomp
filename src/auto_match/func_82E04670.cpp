// hkAlignSceneToNodeOptions's scalar deleting destructor: the implicit destructor inlined (m_nodeName's
// out-of-line destructor fn_82CED5B8, then hkBaseObject's vtable), then the class allocator's delete.
#include "havok/hkBase.h"

// hkAlignSceneToNodeOptions (0x18 bytes, from its hkClass). Both constructors are out of line
// (fn_82E045E8, fn_82E04630).
class hkAlignSceneToNodeOptions : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkAlignSceneToNodeOptions();
    hkAlignSceneToNodeOptions(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_nodeName(f) {}

    hkBool m_invert;               // +0x8
    hkBool m_transformPositionX;   // +0x9
    hkBool m_transformPositionY;   // +0xA
    hkBool m_transformPositionZ;   // +0xB
    hkBool m_transformRotation;    // +0xC
    hkBool m_transformScale;       // +0xD
    hkBool m_transformSkew;        // +0xE
    hkInt32 m_keyframe;            // +0x10
    hkStringPtr m_nodeName;        // +0x14
};

// Emits the vtable (and with it the deleting destructor).
void emitVtable_82E04670(void *p, hkFinishLoadedObjectFlag f) { new (p) hkAlignSceneToNodeOptions(f); }
