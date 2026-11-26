// hkpStorageExtendedMeshShape::MeshSubpartStorage::~MeshSubpartStorage (Physics/Collide/Shape/Compound/
// Collection/StorageExtendedMesh/hkpStorageExtendedMeshShape.h), user-written and empty (it stores the class
// vtable): the eight hkArrays are destroyed in reverse order; the named materials' names (hkStringPtr at +4
// of each 8-byte element) are destroyed first to last.
#include "havok/hkBase.h"
#include "havok/hkpStorageExtendedMeshShape.h"

struct hkpNamedMeshMaterial : public hkpMeshMaterial {
    hkStringPtr m_name;   // +0x4
};

hkpStorageExtendedMeshShape::MeshSubpartStorage::~MeshSubpartStorage()
{
}
