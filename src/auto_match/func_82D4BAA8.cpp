// hkpMoppBvTreeShape::~hkpMoppBvTreeShape (Physics/Collide/Shape/Compound/Tree/Mopp/hkpMoppBvTreeShape.cpp):
// empty; the child container at +0x30 releases its shape, then hkMoppBvTreeShapeBase's inline destructor
// releases the MOPP code.
#include "havok/hkpMoppBvTreeShape.h"

hkpMoppBvTreeShape::~hkpMoppBvTreeShape()
{
}
