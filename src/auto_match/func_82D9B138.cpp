// hkpBallSocketChainData::~hkpBallSocketChainData (Physics/Dynamics/Constraint/Chain/BallSocket/hkpBallSocketChainData.cpp): an empty user-written destructor, then m_infos' destructor.
#include "havok/hkBase.h"

class hkVector4 {
public:
    hkReal x, y, z, w;
};
class hkQuaternion {
public:
    hkReal m_vec[4];
};

class hkpConstraintMotor : public hkReferencedObject {
};

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkUlong m_userData;   // +0x8
};

class hkpConstraintChainData : public hkpConstraintData {
};

class hkpBallSocketChainData : public hkpConstraintChainData {
public:
    virtual ~hkpBallSocketChainData();

    struct ConstraintInfo {
        hkVector4 m_pivotInA;
        hkVector4 m_pivotInB;
    };

    char m_atoms[0xC];               // +0xC  hkpBridgeAtoms
    hkArray<ConstraintInfo> m_infos; // +0x18
    hkReal m_tau;                    // +0x24
    hkReal m_damping;                // +0x28
    hkReal m_cfm;                    // +0x2C
    hkReal m_maxErrorDistance;       // +0x30
};

hkpBallSocketChainData::~hkpBallSocketChainData()
{
}
