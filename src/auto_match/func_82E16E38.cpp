// hkPackfileObjectUpdateTracker::removeFinish(void *oldObject) (slot +0x20): removes the object from the finish
// map (82CEAAA0, the map's remove).
#include "havok/hkPackfileObjectUpdateTracker.h"

extern "C" void fn_82CEAAA0(void *map, hkUlong key);

void hkPackfileObjectUpdateTracker::removeFinish(void *oldObject)
{
    fn_82CEAAA0(&m_finish, hkUlong(oldObject));
}
