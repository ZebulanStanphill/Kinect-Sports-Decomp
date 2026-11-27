// hkPackfileObjectUpdateTracker::addFinish(void *newObject, const char *className) (slot +0x1C): records the
// object's class in the finish map (hkMapBase<hkUlong, hkUlong>::insert, fn_82CEA160).
#include "havok/hkPackfileObjectUpdateTracker.h"

extern "C" void fn_82CEA160(void *self, hkMemoryAllocator *alloc, hkUlong key, hkUlong val);   // hkMapBase<hkUlong, hkUlong>::insert

void hkPackfileObjectUpdateTracker::addFinish(void *newObject, const char *className)
{
    fn_82CEA160(&m_finish, &hkMemoryRouter::getInstance().heap(), hkUlong(newObject), hkUlong(className));
}
