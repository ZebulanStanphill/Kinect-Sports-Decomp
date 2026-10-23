// hkpPointToPathConstraintData::~hkpPointToPathConstraintData (Physics/Dynamics/Constraint/Bilateral/PointToPath/hkpPointToPathConstraintData.cpp).
#include "havok/hkBase.h"

class hkpConstraintMotor : public hkReferencedObject {
};
class hkpParametricCurve : public hkReferencedObject {
};

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkUlong m_userData;   // +0x8
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
