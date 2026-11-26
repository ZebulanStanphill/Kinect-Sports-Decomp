// hkpMoppBvTreeShape scalar deleting destructor: it calls the out-of-line destructor (??1hkpMoppBvTreeShape), defined below as in
// func_82D4BAA8.cpp, which also makes the compiler emit the vtable and this deleting destructor.
// hkpMoppBvTreeShape::~hkpMoppBvTreeShape (Physics/Collide/Shape/Compound/Tree/Mopp/hkpMoppBvTreeShape.cpp):
// empty; the child container at +0x30 releases its shape, then hkMoppBvTreeShapeBase's inline destructor
// releases the MOPP code.
#include "havok/hkpMoppBvTreeShape.h"

hkpMoppBvTreeShape::~hkpMoppBvTreeShape()
{
}
