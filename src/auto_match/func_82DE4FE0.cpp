// hkpSerializedDisplayRbTransforms scalar deleting destructor (compiler-generated); it calls the destructor out of
// line (??1, fn_82DF51A8). The finish constructor at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

class __declspec(align(16)) hkVector4 {
public:
    hkReal x, y, z, w;
};

class hkTransform {
public:
    hkVector4 m_rotation[3];
    hkVector4 m_translation;
};

class hkpRigidBody : public hkReferencedObject {
};

// Physics/Utilities/Serialize/Display/hkpSerializedDisplayRbTransforms.h.
class hkpSerializedDisplayRbTransforms : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    struct DisplayTransformPair {
        hkpRigidBody *m_rb;               // +0x0
        hkTransform m_localToDisplay;     // +0x10
    };
    hkpSerializedDisplayRbTransforms(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_transforms(f) {}
    virtual ~hkpSerializedDisplayRbTransforms();

    hkArray<DisplayTransformPair> m_transforms;   // +0x8
};

void emitVtable_82DE4FE0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpSerializedDisplayRbTransforms(f); }
