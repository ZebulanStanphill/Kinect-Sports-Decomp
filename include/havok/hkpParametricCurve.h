// hkpParametricCurve (Physics/Dynamics/Constraint/Bilateral/PointToPath/hkpParametricCurve.h, the folder of
// the class units), 0x8 bytes: the interface of a path for hkpPointToPathConstraintData. The game has its
// RTTI but no vtable of its own (it is abstract). The slots are those of ??_7hkpLinearParametricCurve@@6B@;
// what is checked against hkpLinearParametricCurve's functions: getTangent +0x14 (82D9F7F8 calls it),
// getStart +0x18 (82D9F038 returns 0), getEnd +0x1C (82D9F730 returns the point count - 1), getBinormal
// +0x24 (mangled ?getBinormal@hkpLinearParametricCurve@@UAAXMAAVhkVector4@@@Z: not const), isClosedLoop
// +0x28 (82D9F028 returns m_closedLoop), transformPoints +0x30 (82D9F968 transforms every point). The other
// names, and the order, follow Havok's header.
#ifndef HAVOK_HKPPARAMETRICCURVE_H
#define HAVOK_HKPPARAMETRICCURVE_H

#include "havok/hkBase.h"
#include "havok/hkTransform.h"
#include "havok/hkVector4.h"

class hkpParametricCurve : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpParametricCurve() {}
    hkpParametricCurve(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    virtual void getPoint(hkReal t, hkVector4 &pointOnCurve) = 0;                                       // +0xC
    virtual hkReal getNearestPoint(hkReal t, const hkVector4 &nearPoint, hkVector4 &pointOnCurve) = 0;   // +0x10
    virtual void getTangent(hkReal t, hkVector4 &tangent) = 0;                                          // +0x14
    virtual hkReal getStart() = 0;                                                                      // +0x18
    virtual hkReal getEnd() = 0;                                                                        // +0x1C
    virtual hkReal getLengthFromStart(hkReal t) = 0;                                                    // +0x20
    virtual void getBinormal(hkReal t, hkVector4 &up) = 0;                                              // +0x24
    virtual hkBool isClosedLoop() = 0;                                                                  // +0x28
    virtual void getPointsToDraw(hkArray<hkVector4> &pathPoints) = 0;                                   // +0x2C
    virtual void transformPoints(const hkTransform &transformation) = 0;                                // +0x30
    virtual hkpParametricCurve *clone() = 0;                                                            // +0x34
};

#endif
