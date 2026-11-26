// hkpLinearParametricCurve (Physics/Dynamics/Constraint/Bilateral/PointToPath/hkpLinearParametricCurve.h, the
// folder of the class units), 0x40 bytes: a path through a list of points. The layout comes from the
// default constructor (82D9FC18: 0.01f at +0x8, false at +0xC, (0, 1, 0, 0) at +0x10, two empty arrays), the
// implicit destructor (82D7F288: the arrays at +0x2C and +0x20), getEnd (82D9F730 reads the point count at
// +0x24), isClosedLoop (+0xC) and getBinormal (82D9F7F8 reads the vector at +0x10). The member names follow
// Havok's header.
#ifndef HAVOK_HKPLINEARPARAMETRICCURVE_H
#define HAVOK_HKPLINEARPARAMETRICCURVE_H

#include "havok/hkpParametricCurve.h"

// ??_7hkpLinearParametricCurve@@6B@: getPoint 82D9F058, getNearestPoint 82D9F138, getTangent 82D9F438,
// getStart 82D9F038, getEnd 82D9F730, getLengthFromStart 82D9F750, getBinormal 82D9F7F8, isClosedLoop
// 82D9F028, getPointsToDraw 82D9FB58, transformPoints 82D9F968, clone 82D9FC78. The destructor is the
// implicit one (??1 82D7F288, ??_G 82D7F340).
class hkpLinearParametricCurve : public hkpParametricCurve {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    // Out of line; in the game it is still fn_82D9FC18.
    hkpLinearParametricCurve();
    hkpLinearParametricCurve(hkFinishLoadedObjectFlag f) : hkpParametricCurve(f), m_points(f), m_distance(f) {}
    virtual void getPoint(hkReal t, hkVector4 &pointOnCurve);
    virtual hkReal getNearestPoint(hkReal t, const hkVector4 &nearPoint, hkVector4 &pointOnCurve);
    virtual void getTangent(hkReal t, hkVector4 &tangent);
    virtual hkReal getStart();
    virtual hkReal getEnd();
    virtual hkReal getLengthFromStart(hkReal t);
    virtual void getBinormal(hkReal t, hkVector4 &up);
    virtual hkBool isClosedLoop();
    virtual void getPointsToDraw(hkArray<hkVector4> &pathPoints);
    virtual void transformPoints(const hkTransform &transformation);
    virtual hkpParametricCurve *clone();

    hkReal m_smoothingFactor;                            // +0x8
    hkBool m_closedLoop;                                 // +0xC
    hkVector4 m_dirNotParallelToTangentAlongWholePath;   // +0x10
    hkArray<hkVector4> m_points;                         // +0x20
    hkArray<hkReal> m_distance;                          // +0x2C
};

#endif
