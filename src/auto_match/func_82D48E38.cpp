// hkpShapeCollection::hkpShapeCollection(hkpShapeType, CollectionType) (Physics/Collide/Shape/Compound/
// Collection/hkpShapeCollection.cpp). RTTI: hkpShape at +0, hkpShapeContainer at +0x10.
#include "havok/hkBase.h"
#include "havok/hkpShape.h"

// hkpShape, hkpShapeContainer and hkpShapeCollection as in havok/hkpShape.h, declared here because the
// unit needs constructors the shared header does not declare.

hkpShapeCollection::hkpShapeCollection(hkpShapeType type, CollectionType collectionType) : hkpShape(type)
{
    m_disableWelding = false;
    m_collectionType = hkUint8(collectionType);
}
