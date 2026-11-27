// hkpEndOfStepCallbackUtil's scalar deleting destructor (slot 0 of ??_7hkpEndOfStepCallbackUtil@@6BhkReferencedObject@@@).
// It keeps its fn_ name: the adjustor thunk of the listener vtable (fn_82DC90C0, a C unit: subi r3, r3, 8;
// b fn_82DC90C8) cannot be written in source (the compiler's thunk jumps to the ??_E alias). It calls the
// implicit destructor out of line, then the class allocator.
#include "havok/hkBase.h"
#include "havok/hkpEndOfStepCallbackUtil.h"

extern "C" hkpEndOfStepCallbackUtil *fn_82DC90C8(hkpEndOfStepCallbackUtil *self, unsigned int flags)
{
    self->hkpEndOfStepCallbackUtil::~hkpEndOfStepCallbackUtil();
    if (flags & 1)
        hkpEndOfStepCallbackUtil::operator delete(self);
    return self;
}
