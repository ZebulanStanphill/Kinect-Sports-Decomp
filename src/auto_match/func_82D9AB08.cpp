#include "havok/hkString.h"

/* hkpConstraintData::addInstance(hkpConstraintInstance *constraint, hkpConstraintRuntime *runtime,
   int sizeOfRuntime) const: slot 0x2c of every hkp*ConstraintData vtable; clears the runtime
   (hkString::memSet is hkString::memSet). */

extern "C" void fn_82D9AB08(const void *self, void *constraint, void *runtime, int sizeOfRuntime)
{
    if (runtime != 0) {
        hkString::memSet(runtime, 0, sizeOfRuntime);
    }
}
