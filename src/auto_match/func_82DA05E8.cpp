// hkpPointToPathConstraintData::~hkpPointToPathConstraintData (Physics/Dynamics/Constraint/Bilateral/PointToPath/hkpPointToPathConstraintData.cpp).
#include "havok/hkBase.h"
#include "havok/hkpParametricCurve.h"
#include "havok/hkpPointToPathConstraintData.h"

hkpPointToPathConstraintData::~hkpPointToPathConstraintData()
{
    if (m_path)
        m_path->removeReference();
}
