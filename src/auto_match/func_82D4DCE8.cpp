#include "havok/hkpShape.h"
extern "C" void fn_82D43000(void *);
struct ShapesSubpart {
    char data[0x40];
    HK_FORCE_INLINE ~ShapesSubpart() { fn_82D43000(this); }
};
class hkpExtendedMeshShape : public hkpShapeCollection {
public:
    hkpExtendedMeshShape();
    virtual ~hkpExtendedMeshShape();
    char pad[0xA8];
    hkArrayBase<ShapesSubpart> m_shapesSubparts;
    char tail[0x24];
};
class hkpStorageExtendedMeshShape : public hkpExtendedMeshShape {
public:
    hkpStorageExtendedMeshShape();
    virtual ~hkpStorageExtendedMeshShape();
    hkArray<hkReferencedObject *> m_meshStorage;
    hkArray<hkReferencedObject *> m_shapeStorage;
};

hkpStorageExtendedMeshShape::~hkpStorageExtendedMeshShape()
{
    for (int i=0; i<m_meshStorage.getSize(); ++i) m_meshStorage[i]->removeReference();
    m_shapesSubparts.clear();
    for (int i=0; i<m_shapeStorage.getSize(); ++i) m_shapeStorage[i]->removeReference();
}
