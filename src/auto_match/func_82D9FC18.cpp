// hkpLinearParametricCurve::hkpLinearParametricCurve() (Physics/Dynamics/Constraint/Bilateral/
// PointToPath/hkpLinearParametricCurve.cpp), /O2 /QVMXReserve (flag file). It keeps its fn_ name (the
// constructor body runs through MSVC's explicit self->C::C() call).
// The smoothing factor 0.01f and the direction (0, 1, 0, 0) are literals: hkVector4::set builds the quad
// in a local, which the compiler folds into a vector constant; the rename map names the game's merged
// copy of it (lbl_820D2840) __vmx@000000003f8000000000000000000000.
#include "havok/hkpLinearParametricCurve.h"

HK_FORCE_INLINE hkpLinearParametricCurve::hkpLinearParametricCurve() : m_smoothingFactor(0.01f), m_closedLoop(false)
{
    m_dirNotParallelToTangentAlongWholePath.set(0.0f, 1.0f, 0.0f, 0.0f);
}

extern "C" hkpLinearParametricCurve *fn_82D9FC18(hkpLinearParametricCurve *self)
{
    self->hkpLinearParametricCurve::hkpLinearParametricCurve();
    return self;
}
