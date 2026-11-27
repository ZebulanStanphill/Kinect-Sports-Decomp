// hkCriticalSection::hkCriticalSection(int spinCount) (Common/Base/Thread/CriticalSection/hkCriticalSection.cpp):
// initialises the RTL_CRITICAL_SECTION with the spin count.
#include "havok/hkBase.h"
#include "havok/hkCriticalSection.h"

extern "C" int RtlInitializeCriticalSectionAndSpinCount(void *cs, int spinCount);

hkCriticalSection::hkCriticalSection(int spinCount) { RtlInitializeCriticalSectionAndSpinCount(this, spinCount); }
