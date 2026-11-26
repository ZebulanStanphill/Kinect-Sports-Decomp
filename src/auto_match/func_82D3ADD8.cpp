// hkpShapeInfo::~hkpShapeInfo (Physics/Utilities/Serialize/ShapeInfo/hkpShapeInfo.cpp), user-written and empty
// (it stores the class vtable): the members are destroyed in reverse order: the child transforms and child shape
// names hkArrays, then the hkRefPtr to the shape.
#include "havok/hkBase.h"
#include "havok/hkpShapeInfo.h"

hkpShapeInfo::~hkpShapeInfo()
{
}
