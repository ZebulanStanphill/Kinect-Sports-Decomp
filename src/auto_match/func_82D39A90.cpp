// hkpConvexListShape scalar deleting destructor: it calls the out-of-line destructor (??1hkpConvexListShape), defined below as in
// func_82D48D38.cpp, which also makes the compiler emit the vtable and this deleting destructor.
// hkpConvexListShape::~hkpConvexListShape (Physics/Collide/Shape/Convex/ConvexList/hkpConvexListShape.cpp):
// releases every child shape, then the child hkArray (+0x44) and the bases are destroyed. RTTI:
// hkpConvexShape at +0, hkpShapeContainer at +0x14.
#include "havok/hkpConvexListShape.h"

hkpConvexListShape::~hkpConvexListShape()
{
    for (int i = 0; i < m_childShapes.getSize(); i++) {
        m_childShapes[i]->removeReference();
    }
}
