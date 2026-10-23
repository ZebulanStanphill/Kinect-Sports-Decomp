// hkpPoweredChainData::~hkpPoweredChainData (Physics/Dynamics/Constraint/Chain/Powered/hkpPoweredChainData.cpp): releases each link's three motors, then m_infos' destructor.
#include "havok/hkBase.h"

class __declspec(align(16)) hkVector4 {
public:
    hkReal x, y, z, w;
};
class __declspec(align(16)) hkQuaternion {
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

class hkpPoweredChainData : public hkpConstraintChainData {
public:
    virtual ~hkpPoweredChainData();

    struct ConstraintInfo {
        hkVector4 m_pivotInA;
        hkVector4 m_pivotInB;
        hkQuaternion m_aTc;
        hkQuaternion m_bTc;
        hkpConstraintMotor *m_motors[3];   // +0x40
        hkBool m_switchBodies;             // +0x4C
    };

    char m_atoms[0xC];               // +0xC  hkpBridgeAtoms
    hkArray<ConstraintInfo> m_infos; // +0x18
};

hkpPoweredChainData::~hkpPoweredChainData()
{
    for(int i=0;i<m_infos.getSize();++i) { int offset=i*sizeof(ConstraintInfo)+0x40; int remaining=3; do { if((*(hkpConstraintMotor **)((char *)m_infos.m_data+offset))) (*(hkpConstraintMotor **)((char *)m_infos.m_data+offset))->removeReference(); offset+=4; } while(--remaining); }
}
