// hkpSimpleConstraintContactMgr's scalar deleting destructor ??_GhkpSimpleConstraintContactMgr@@UAAPAXI@Z
// (Physics/Dynamics/Collide/hkpSimpleConstraintContactMgr.h): calls the out-of-line destructor
// (fn_82DAC420), then frees through the class allocator. The function at the end only makes the compiler
// emit the vtable, and with it this function.
#include "havok/hkBase.h"
#include "havok/hkpSimpleConstraintContactMgr.h"

// Copies an object: the header's only constructor is out of line.
void emitVtable_82DAC928(void *p, const void *q)
{
    new (p) hkpSimpleConstraintContactMgr(*(const hkpSimpleConstraintContactMgr *)q);
}
