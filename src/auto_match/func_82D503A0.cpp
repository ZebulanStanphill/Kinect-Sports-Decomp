// hkpStorageMeshShape::SubpartStorage scalar deleting destructor: calls the user-written destructor
// (fn_82D501D0) out of line, then frees through the class allocator. The function at the end only makes the
// compiler emit the vtable.
#include "havok/hkBase.h"

class hkpStorageMeshShape {
public:
    struct SubpartStorage : public hkReferencedObject {
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
        SubpartStorage(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
        virtual ~SubpartStorage();

        hkArray<hkReal> m_vertices;              // +0x8
        hkArray<hkUint16> m_indices16;           // +0x14
        hkArray<hkUint32> m_indices32;           // +0x20
        hkArray<hkUint8> m_materialIndices;      // +0x2C
        hkArray<hkUint32> m_materials;           // +0x38
        hkArray<hkUint16> m_materialIndices16;   // +0x44
    };
};

void emitVtable_82D503A0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpStorageMeshShape::SubpartStorage(f); }
