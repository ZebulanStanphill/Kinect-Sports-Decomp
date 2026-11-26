// hkpListShape::hkpListShape(hkFinishLoadedObjectFlag), the out-of-line finish constructor (Physics/Collide/Shape/Compound/Collection/List/hkpListShape.cpp).
// When finishing, hkpShape's clears m_type, hkpShapeCollection's sets HK_SHAPE_COLLECTION (7) and
// COLLECTION_USER (3), and this class's sets HK_SHAPE_LIST and COLLECTION_LIST. Its finish function and getVtable function call it;
// because a Matching unit calls it, it keeps its fn_ name and is written as an extern "C" function that
// runs the constructor on the given storage (MSVC's explicit constructor call; placement new would add
// a null check). The constructor is HK_FORCE_INLINE, or the explicit call stays a call.
#include "havok/hkBase.h"
#include "havok/hkpListShape.h"

// The header declares the constructor; it is defined here.
HK_FORCE_INLINE hkpListShape::hkpListShape(hkFinishLoadedObjectFlag flag) : hkpShapeCollection(flag), m_childInfo(flag)
{
    if (flag.m_finishing) {
        m_type = HK_SHAPE_LIST;
        m_collectionType = COLLECTION_LIST;
    }
}

extern "C" hkpListShape *fn_82D3E4C8(hkpListShape *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpListShape::hkpListShape(flag);
    return self;
}
