// hkConstraintInternal (Physics/Dynamics/Constraint/hkpConstraintInstance.h):
// what an entity keeps for each constraint it is the master of. 0x30 bytes:
// hkpEntity's destructor (82D8AD50) frees capacity * 48 for the array of
// them. The members have not been recovered.
#ifndef HAVOK_HKCONSTRAINTINTERNAL_H
#define HAVOK_HKCONSTRAINTINTERNAL_H

#include "havok/hkBaseTypes.h"

struct hkConstraintInternal {
    hkUint32 m_data[12];
};

#endif
