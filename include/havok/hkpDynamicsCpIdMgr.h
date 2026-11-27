// hkpDynamicsCpIdMgr (Physics/Dynamics/Collide/hkpDynamicsCpIdMgr.h), 0x14 bytes: hands out the ids of the contact
// points of one contact constraint; an hkInplaceArray<hkUint8, 8> of values.
// Layout from hkpSimpleContactConstraintData's constructor (82DC7F58), which builds it inline at +0xC: the data
// pointer to its own storage (+0xC from the array), size 0, capacity 8 | DONT_DEALLOCATE_FLAG. The destructor
// is out of line (82DAC7C8: the array's destructor, which frees the buffer unless it is the inline storage and
// resets the array); hkpSimpleConstraintContactMgr's constructor and destructor (82DAC350, 82DAC420) and
// hkpSimpleContactConstraintData's destructor (82DAC840) call it. The name of the member follows Havok's header.
#ifndef HAVOK_HKPDYNAMICSCPIDMGR_H
#define HAVOK_HKPDYNAMICSCPIDMGR_H

#include "havok/hkBase.h"
#include "havok/hkArray.h"

class hkpDynamicsCpIdMgr {
public:
    ~hkpDynamicsCpIdMgr();

    hkInplaceArray<hkUint8, 8> m_values;   // +0x0
};

#endif
