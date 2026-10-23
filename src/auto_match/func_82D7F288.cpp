// hkpLinearParametricCurve::~hkpLinearParametricCurve, the implicit destructor (Physics/Dynamics/Constraint/Chain/...,
// Physics/Utilities/Constraint/ParametricCurve/hkpLinearParametricCurve.h): the two arrays in reverse order, then the
// bases. Emitted out of line because the deleting destructor (fn_82D7F340) does not inline it; the finish
// constructor below only makes the compiler emit the vtable.
#include "havok/hkBase.h"

class __declspec(align(16)) hkVector4 {
public:
    hkReal m_quad[4];
};

class hkpParametricCurve : public hkReferencedObject {
public:
    hkpParametricCurve(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}
};

class hkpLinearParametricCurve : public hkpParametricCurve {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpLinearParametricCurve(hkFinishLoadedObjectFlag f) : hkpParametricCurve(f), m_points(f), m_distance(f) {}

    hkReal m_smoothingFactor;                             // +0x8
    hkBool m_closedLoop;                                  // +0xC
    hkVector4 m_dirNotParallelToTangentAlongWholePath;    // +0x10
    hkArray<hkVector4> m_points;                          // +0x20
    hkArray<hkReal> m_distance;                           // +0x2C
};

void emitVtable_82D7F288(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpLinearParametricCurve(f); }
