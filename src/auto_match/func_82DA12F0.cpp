// hkpPoweredChainData::~hkpPoweredChainData (Physics/Dynamics/Constraint/Chain/Powered/hkpPoweredChainData.cpp): releases each link's three motors, then m_infos' destructor.
#include "havok/hkBase.h"
#include "havok/hkpConstraintMotor.h"
#include "havok/hkpPoweredChainData.h"

hkpPoweredChainData::~hkpPoweredChainData()
{
    for(int i=0;i<m_infos.getSize();++i) { int offset=i*sizeof(ConstraintInfo)+0x40; int remaining=3; do { if((*(hkpConstraintMotor **)((char *)m_infos.m_data+offset))) (*(hkpConstraintMotor **)((char *)m_infos.m_data+offset))->removeReference(); offset+=4; } while(--remaining); }
}
