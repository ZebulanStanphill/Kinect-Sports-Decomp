// hkpSimpleContactConstraintData's scalar deleting destructor ??_GhkpSimpleContactConstraintData@@UAAPAXI@Z
// (Physics/Dynamics/Collide/hkpSimpleContactConstraintData.h): calls the out-of-line destructor
// (fn_82DAC840), then frees through the class allocator. The function at the end only makes the compiler
// emit the vtable, and with it this function.
#include "havok/hkBase.h"
#include "havok/hkpSimpleContactConstraintData.h"

// Copies an object: the header's only constructor is out of line.
void emitVtable_82DAC8C0(void *p, const void *q)
{
    new (p) hkpSimpleContactConstraintData(*(const hkpSimpleContactConstraintData *)q);
}
