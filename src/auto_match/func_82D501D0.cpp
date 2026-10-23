// hkpStorageMeshShape::SubpartStorage::~SubpartStorage (Physics/Collide/Shape/Deprecated/StorageMesh/
// hkpStorageMeshShape.h), user-written and empty (it stores the class vtable): the six hkArrays are
// destroyed in reverse order.
#include "havok/hkBase.h"

class hkpStorageMeshShape {
public:
    struct SubpartStorage : public hkReferencedObject {
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SHAPE);
        SubpartStorage(hkFinishLoadedObjectFlag flag);
        virtual ~SubpartStorage();

        hkArray<hkReal> m_vertices;              // +0x8
        hkArray<hkUint16> m_indices16;           // +0x14
        hkArray<hkUint32> m_indices32;           // +0x20
        hkArray<hkUint8> m_materialIndices;      // +0x2C
        hkArray<hkUint32> m_materials;           // +0x38
        hkArray<hkUint16> m_materialIndices16;   // +0x44
    };
};

hkpStorageMeshShape::SubpartStorage::~SubpartStorage()
{
}
