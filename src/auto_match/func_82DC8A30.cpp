// hkpEndOfStepCallbackUtil::hkpEndOfStepCallbackUtil(): hkReferencedObject at +0, the hkpWorldPostSimulationListener
// interface at +8 (its own vtable store survives), then m_sequenceNumber (+0xc), the hkBool
// m_deterministicOrder (+0x10) and three empty hkArrays. A Matching C unit (func_82DB4458) calls
// it, so it keeps its fn_ name; the MI vtables are renamed to the compiler's names.
#include "havok/hkBase.h"
#include "havok/hkpEndOfStepCallbackUtil.h"

HK_FORCE_INLINE hkpEndOfStepCallbackUtil::hkpEndOfStepCallbackUtil()
    : m_sequenceNumber(0), m_deterministicOrder(false)
{
}

extern "C" hkpEndOfStepCallbackUtil *fn_82DC8A30(hkpEndOfStepCallbackUtil *self)
{
    self->hkpEndOfStepCallbackUtil::hkpEndOfStepCallbackUtil();
    return self;
}
