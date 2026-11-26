// hkpTriangleShape (Physics/Collide/Shape/Convex/Triangle/hkpTriangleShape.h),
// 0x60 bytes.
#ifndef HAVOK_HKPTRIANGLESHAPE_H
#define HAVOK_HKPTRIANGLESHAPE_H

#include "havok/hkVector4.h"
#include "havok/hkpShape.h"

class hkpTriangleShape : public hkpConvexShape {
public:
    HK_FORCE_INLINE hkpTriangleShape(hkReal radius, hkUint16 weldingInfo, hkUint8 type)
        : hkpConvexShape(HK_SHAPE_TRIANGLE, radius)
    {
        m_weldingInfo = weldingInfo;
        m_weldingType = type;
        m_extrusion.setZero4();
        m_isExtruded = 0;
    }
    // The finish constructor stores the type unconditionally (finishLoadedObjecthkpTriangleShape, 82D3BA10).
    hkpTriangleShape(hkFinishLoadedObjectFlag flag) : hkpConvexShape(flag) { m_type = HK_SHAPE_TRIANGLE; }
    const hkVector4 &getVertex(int i) const { return (&m_vertexA)[i]; }
    HK_FORCE_INLINE void setVertex(int i, const hkVector4 &v) { (&m_vertexA)[i] = v; }

    hkUint16 m_weldingInfo;   // +0x14
    hkUint8 m_weldingType;    // +0x16
    hkUint8 m_isExtruded;     // +0x17
    hkVector4 m_vertexA;      // +0x20
    hkVector4 m_vertexB;      // +0x30
    hkVector4 m_vertexC;      // +0x40
    hkVector4 m_extrusion;    // +0x50
};

#endif
