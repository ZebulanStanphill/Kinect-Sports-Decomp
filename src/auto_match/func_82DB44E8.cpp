// hkpCollisionCallbackUtil scalar deleting destructor. It keeps its fn_ name because its adjustor
// thunks (fn_82DB44D8, fn_82DB44E0: subi r3 + b fn_82DB44E8) are plain C, so it is written out
// instead of being the compiler's ??_G. The implicit destructor destroys the embedded
// hkpEndOfStepCallbackUtil at +0x14 (its destructor is out of line), then the listener bases store their
// vtables and hkBaseObject's; the class allocator frees m_memSizeAndFlags bytes. hkpCollisionCallbackUtil
// has no header yet; layout as func_82DB4458.cpp.
#include "havok/hkBase.h"
#include "havok/hkpConstraintListener.h"
#include "havok/hkpWorldDeletionListener.h"
#include "havok/hkpEndOfStepCallbackUtil.h"

// RTTI: hkReferencedObject at +0x0, hkpConstraintListener at +0x8, hkpWorldDeletionListener at +0xC.
class hkpCollisionCallbackUtil : public hkReferencedObject, public hkpConstraintListener, public hkpWorldDeletionListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpCollisionCallbackUtil();
    int m_count;                                         // +0x10
    hkpEndOfStepCallbackUtil m_endOfStepCallbackUtil;    // +0x14
};

extern "C" hkpCollisionCallbackUtil *fn_82DB44E8(hkpCollisionCallbackUtil *self, unsigned int flags)
{
    self->hkpCollisionCallbackUtil::~hkpCollisionCallbackUtil();
    if (flags & 1)
        hkpCollisionCallbackUtil::operator delete(self);
    return self;
}
