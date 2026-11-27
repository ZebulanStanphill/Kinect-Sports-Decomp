// hkPackfileObjectUpdateTracker::addAllocation(void *p) (slot +0xC): forwards to the packfile data
// (82E0DF70, hkPackfileData's addAllocation).
#include "havok/hkPackfileObjectUpdateTracker.h"

extern "C" void fn_82E0DF70(hkPackfileData *data, void *p);

void hkPackfileObjectUpdateTracker::addAllocation(void *p)
{
    fn_82E0DF70(m_packfileData, p);
}
