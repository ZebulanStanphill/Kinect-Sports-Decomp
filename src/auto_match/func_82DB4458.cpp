// hkpCollisionCallbackUtil::hkpCollisionCallbackUtil(): the listener bases, the count, then the embedded
// hkpEndOfStepCallbackUtil at +0x14 (its constructor is out of line). hkpCollisionCallbackUtil has no header
// yet, so the class is declared here.
#include "havok/hkBase.h"
#include "havok/hkpConstraintListener.h"
#include "havok/hkpWorldDeletionListener.h"
#include "havok/hkpEndOfStepCallbackUtil.h"

class hkpCollisionCallbackUtil : public hkReferencedObject, public hkpConstraintListener, public hkpWorldDeletionListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(0);
    hkpCollisionCallbackUtil();
    int m_count;                                         // +0x10
    hkpEndOfStepCallbackUtil m_endOfStepCallbackUtil;    // +0x14
};

hkpCollisionCallbackUtil::hkpCollisionCallbackUtil() : m_count(1) {}
