// hkpEndOfStepCallbackUtil::hkpEndOfStepCallbackUtil(): hkReferencedObject at +0, the hkpWorldPostSimulationListener
// interface at +8 (its own vtable store survives), then m_sequenceNumber (+0xc), the hkBool
// m_deterministicOrder (+0x10) and three empty hkArrays.
#include "havok/hkBase.h"
#include "havok/hkpEndOfStepCallbackUtil.h"

hkpEndOfStepCallbackUtil::hkpEndOfStepCallbackUtil() : m_sequenceNumber(0), m_deterministicOrder(false) {}
