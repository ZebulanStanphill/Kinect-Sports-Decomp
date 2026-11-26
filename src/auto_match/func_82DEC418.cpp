// hkpBreakOffPartsUtil::LimitContactImpulseUtil's scalar deleting destructor: the implicit destructor (the pointer
// map at +0x1C, then hkpContactListener's and hkBaseObject's vtable stores), then the class allocator. The
// this-adjusting thunk fn_82DEC410, a Matching C unit, calls it by its fn_ name, so it keeps that name and is
// written out as the compiler generates it.
#include "havok/hkBase.h"
#include "havok/hkpBreakOffPartsUtil.h"

extern "C" void *fn_82DEC418(hkpBreakOffPartsUtil::LimitContactImpulseUtil *self, unsigned int flags)
{
    self->hkpBreakOffPartsUtil::LimitContactImpulseUtil::~LimitContactImpulseUtil();
    if (flags & 1)
        hkpBreakOffPartsUtil::LimitContactImpulseUtil::operator delete(self);
    return self;
}
