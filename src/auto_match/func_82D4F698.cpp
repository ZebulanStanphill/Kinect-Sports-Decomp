// hkpStorageMeshShape::~hkpStorageMeshShape (Physics/Collide/Shape/Deprecated/StorageMesh/hkpStorageMeshShape.cpp):
// stores its two vtables, releases every subpart storage, destroys the m_storage hkArray (+0x60), then
// calls the out-of-line hkpMeshShape destructor (??1hkpMeshShape@@UAA@XZ, fn_82D3A2E0).
#include "havok/hkpStorageMeshShape.h"

hkpStorageMeshShape::~hkpStorageMeshShape()
{
    for (int i = 0; i < m_storage.getSize(); i++) {
        m_storage[i]->removeReference();
    }
}
