// hkpEndOfStepCallbackUtil's scalar deleting destructor (slot 0 of ??_7hkpEndOfStepCallbackUtil@@6BhkReferencedObject@@@).
// It calls hkpEndOfStepCallbackUtil's destructor fn_82DB4350, which keeps its fn_ name, then the class allocator.
#include "havok/hkBase.h"
#include "havok/hkpEndOfStepCallbackUtil.h"

extern "C" {
void fn_82DB4350(hkpEndOfStepCallbackUtil *self);   // hkpEndOfStepCallbackUtil::~hkpEndOfStepCallbackUtil
}

extern "C" hkpEndOfStepCallbackUtil *fn_82DC90C8(hkpEndOfStepCallbackUtil *self, unsigned int flags)
{
    fn_82DB4350(self);
    if (flags & 1)
        hkpEndOfStepCallbackUtil::operator delete(self);
    return self;
}
