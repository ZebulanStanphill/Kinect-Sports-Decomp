// hkpStorageExtendedMeshShape::ShapeSubpartStorage::ShapeSubpartStorage(hkFinishLoadedObjectFlag), the out-of-line finish constructor (Physics/Collide/Shape/Compound/Collection/StorageExtendedMesh/hkpStorageExtendedMeshShape.cpp). Its
// finish function and getVtable function call it; because a Matching unit calls it, it keeps its fn_ name
// and is written as an extern "C" function that runs the constructor on the given storage (MSVC's explicit
// constructor call; placement new would add a null check).
#include "havok/hkBase.h"

class hkpStorageExtendedMeshShape {
public:
    struct Material {
        hkUint32 m_filterInfo;
        hkUint32 m_restitutionAndFriction;
        hkUlong m_userData;
    };

    struct ShapeSubpartStorage : public hkReferencedObject {
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
        ShapeSubpartStorage(hkFinishLoadedObjectFlag flag)
            : hkReferencedObject(flag), m_materialIndices(flag), m_materials(flag), m_materialIndices16(flag) {}

        hkArray<hkUint8> m_materialIndices;     // +0x8
        hkArray<Material> m_materials;          // +0x14
        hkArray<hkUint16> m_materialIndices16;  // +0x20
    };
};

extern "C" hkpStorageExtendedMeshShape::ShapeSubpartStorage *fn_82D4DC70(hkpStorageExtendedMeshShape::ShapeSubpartStorage *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpStorageExtendedMeshShape::ShapeSubpartStorage::ShapeSubpartStorage(flag);
    return self;
}
