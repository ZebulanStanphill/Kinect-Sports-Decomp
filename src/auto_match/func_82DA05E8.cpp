// hkpPointToPathConstraintData::~hkpPointToPathConstraintData (Physics/Dynamics/Constraint/Bilateral/PointToPath/hkpPointToPathConstraintData.cpp).
#include "havok/hkBase.h"
#include "havok/hkpConstraintData.h"

class hkpParametricCurve : public hkReferencedObject {
};

class hkpPointToPathConstraintData : public hkpConstraintData {
public:
    virtual ~hkpPointToPathConstraintData();

    char m_atoms[0xC];                    // +0xC  hkpBridgeAtoms
    hkpParametricCurve *m_path;           // +0x18
};

hkpPointToPathConstraintData::~hkpPointToPathConstraintData()
{
    if (m_path)
        m_path->removeReference();
}
