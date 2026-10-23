// hkpStorageExtendedMeshShape::ShapeSubpartStorage::~ShapeSubpartStorage (Physics/Collide/Shape/Compound/
// Collection/StorageExtendedMesh/hkpStorageExtendedMeshShape.h), user-written and empty (it stores the class
// vtable): the three hkArrays are destroyed in reverse order.
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
        ShapeSubpartStorage(hkFinishLoadedObjectFlag flag);
        virtual ~ShapeSubpartStorage();

        hkArray<hkUint8> m_materialIndices;     // +0x8
        hkArray<Material> m_materials;          // +0x14
        hkArray<hkUint16> m_materialIndices16;  // +0x20
    };
};

hkpStorageExtendedMeshShape::ShapeSubpartStorage::~ShapeSubpartStorage()
{
}
