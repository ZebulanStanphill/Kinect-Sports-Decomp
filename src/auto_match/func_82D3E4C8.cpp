// hkpListShape::hkpListShape(hkFinishLoadedObjectFlag), the out-of-line finish constructor
// (Physics/Collide/Shape/Compound/Collection/List/hkpListShape.cpp). When finishing, hkpShape's clears m_type,
// hkpShapeCollection's sets HK_SHAPE_COLLECTION (7) and COLLECTION_USER (3), and this class's sets HK_SHAPE_LIST
// and COLLECTION_LIST. Its finish function and getVtable function call it.
#include "havok/hkBase.h"
#include "havok/hkpListShape.h"

hkpListShape::hkpListShape(hkFinishLoadedObjectFlag flag) : hkpShapeCollection(flag), m_childInfo(flag)
{
    if (flag.m_finishing) {
        m_type = HK_SHAPE_LIST;
        m_collectionType = COLLECTION_LIST;
    }
}
