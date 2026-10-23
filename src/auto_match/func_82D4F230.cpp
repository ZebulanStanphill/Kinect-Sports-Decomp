// hkpStorageExtendedMeshShape::ShapeSubpartStorage scalar deleting destructor: calls the user-written
// destructor (fn_82D4F128) out of line, then frees through the class allocator. The function at the end only
// makes the compiler emit the vtable.
#include "havok/hkBase.h"

class hkpStorageExtendedMeshShape {
public:
    struct Material {
        hkUint32 m_filterInfo;
        hkUlong m_userData;
        hkUint32 m_pad;
    };

    struct ShapeSubpartStorage : public hkReferencedObject {
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
        ShapeSubpartStorage(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
        virtual ~ShapeSubpartStorage();

        hkArray<hkUint8> m_materialIndices;     // +0x8
        hkArray<Material> m_materials;          // +0x14
        hkArray<hkUint16> m_materialIndices16;  // +0x20
    };
};

void emitVtable_82D4F230(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpStorageExtendedMeshShape::ShapeSubpartStorage(f); }
