// hkpStorageMeshShape::SubpartStorage::SubpartStorage(hkFinishLoadedObjectFlag), the out-of-line finish constructor (Physics/Collide/Shape/Deprecated/StorageMesh/hkpStorageMeshShape.cpp). Its
// finish function and getVtable function call it; because a Matching unit calls it, it keeps its fn_ name
// and is written as an extern "C" function that runs the constructor on the given storage (MSVC's explicit
// constructor call; placement new would add a null check).
#include "havok/hkBase.h"

class hkpStorageMeshShape {
public:
    struct SubpartStorage : public hkReferencedObject {
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
        SubpartStorage(hkFinishLoadedObjectFlag flag)
            : hkReferencedObject(flag), m_vertices(flag), m_indices16(flag), m_indices32(flag),
              m_materialIndices(flag), m_materials(flag), m_materialIndices16(flag) {}

        hkArray<hkReal> m_vertices;              // +0x8
        hkArray<hkUint16> m_indices16;           // +0x14
        hkArray<hkUint32> m_indices32;           // +0x20
        hkArray<hkUint8> m_materialIndices;      // +0x2C
        hkArray<hkUint32> m_materials;           // +0x38
        hkArray<hkUint16> m_materialIndices16;   // +0x44
    };
};

extern "C" hkpStorageMeshShape::SubpartStorage *fn_82D4F628(hkpStorageMeshShape::SubpartStorage *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpStorageMeshShape::SubpartStorage::SubpartStorage(flag);
    return self;
}
