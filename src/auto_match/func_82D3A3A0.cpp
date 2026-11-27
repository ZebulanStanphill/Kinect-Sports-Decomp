// hkpFastMeshShape::hkpFastMeshShape(hkFinishLoadedObjectFlag), the out-of-line finish constructor
// (Physics/Collide/Shape/Deprecated/FastMesh/hkpFastMeshShape.h): hkpMeshShape's out-of-line finish constructor
// (82D4B0F8), the two vtables (hkpShape part at +0, hkpShapeContainer part at +0x10), and when finishing
// m_type = 0x18 (the triangle collection type hkpMeshShape also sets).
#include "havok/hkpFastMeshShape.h"

hkpFastMeshShape::hkpFastMeshShape(hkFinishLoadedObjectFlag flag) : hkpMeshShape(flag)
{
    if (flag.m_finishing) {
        m_type = HK_SHAPE_TRIANGLE_COLLECTION;
    }
}
