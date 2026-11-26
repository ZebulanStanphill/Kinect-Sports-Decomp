// hkpExtendedMeshShape::~hkpExtendedMeshShape (Physics/Collide/Shape/Compound/Collection/ExtendedMeshShape/
// hkpExtendedMeshShape.cpp), user-written and empty: the welding info, shapes subpart and triangles subpart
// hkArrays are destroyed in reverse order, then the bases (hkpShapeCollection: hkpShapeContainer at +0x10).
// The shapes subparts have an out-of-line destructor (fn_82D43000, which keeps its fn_ name because a
// Matching unit calls it), run for each element first to last.
#include "havok/hkpExtendedMeshShape.h"

hkpExtendedMeshShape::~hkpExtendedMeshShape()
{
}
