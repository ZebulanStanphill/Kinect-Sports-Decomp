// hkpLinearParametricCurve::~hkpLinearParametricCurve, the implicit destructor (Physics/Dynamics/Constraint/Chain/...,
// Physics/Utilities/Constraint/ParametricCurve/hkpLinearParametricCurve.h): the two arrays in reverse order, then the
// bases. Emitted out of line because the deleting destructor (fn_82D7F340) does not inline it; the finish
// constructor below only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkpLinearParametricCurve.h"

void emitVtable_82D7F288(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpLinearParametricCurve(f); }
