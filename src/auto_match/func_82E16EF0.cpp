// hkPackfileObjectUpdateTracker::~hkPackfileObjectUpdateTracker() (Common/Serialize/Packfile/
// hkPackfileObjectUpdateTracker.h): the user-written body releases the packfile data (no null check), then the
// members are destroyed in reverse order: the finish map (+0x28, an inline hkPointerMap) and the pointer
// multimap (+0xC), whose destructor is out of line (fn_82E1BDF0).
#include "havok/hkPackfileObjectUpdateTracker.h"
#include "havok/hkPackfileData.h"

hkPackfileObjectUpdateTracker::~hkPackfileObjectUpdateTracker()
{
    m_packfileData->removeReference();
}
