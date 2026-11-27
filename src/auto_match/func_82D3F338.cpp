// hkpConvexVerticesShape::hkpConvexVerticesShape(hkFinishLoadedObjectFlag), the out-of-line finish constructor
// (Physics/Collide/Shape/Convex/ConvexVertices/hkpConvexVerticesShape.cpp). hkpShape's clears m_type when
// finishing, hkpConvexShape's sets 0x12 (HK_SHAPE_CONVEX) unconditionally, and this class's sets
// HK_SHAPE_CONVEX_VERTICES when finishing. Its finish function and getVtable function call it.
#include "havok/hkBase.h"
#include "havok/hkpConvexVerticesShape.h"

hkpConvexVerticesShape::hkpConvexVerticesShape(hkFinishLoadedObjectFlag flag)
    : hkpConvexShape(flag), m_rotatedVertices(flag), m_planeEquations(flag)
{
    if (flag.m_finishing)
        m_type = HK_SHAPE_CONVEX_VERTICES;
}
