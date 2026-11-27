// hkpConstraintData::addInstance(hkpConstraintInstance *, hkpConstraintRuntime *, int) const
// (Physics/Dynamics/Constraint/hkpConstraintData.cpp): slot +0x2C of every constraint data's vtable. It clears
// the runtime.
#include "havok/hkpConstraintData.h"
#include "havok/hkString.h"

void hkpConstraintData::addInstance(hkpConstraintInstance *constraint, hkpConstraintRuntime *runtime,
                                    int sizeOfRuntime) const
{
    if (runtime)
        hkString::memSet(runtime, 0, sizeOfRuntime);
}
