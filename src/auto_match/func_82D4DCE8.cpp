// hkpStorageExtendedMeshShape::~hkpStorageExtendedMeshShape
// (Physics/Collide/Shape/Compound/Collection/StorageExtendedMesh/hkpStorageExtendedMeshShape.cpp): releases the
// mesh storages, destroys the shapes subparts (which hold references to the stored shapes) and releases the
// shape storages; then the two arrays and the hkpExtendedMeshShape base.
#include "havok/hkpStorageExtendedMeshShape.h"

hkpStorageExtendedMeshShape::~hkpStorageExtendedMeshShape()
{
    for (int i = 0; i < m_meshstorage.getSize(); ++i)
        m_meshstorage[i]->removeReference();
    m_shapesSubparts.clear();
    for (int i = 0; i < m_shapestorage.getSize(); ++i)
        m_shapestorage[i]->removeReference();
}
