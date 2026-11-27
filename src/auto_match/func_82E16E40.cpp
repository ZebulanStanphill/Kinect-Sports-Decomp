// hkPackfileObjectUpdateTracker::setTopLevelObject(void *topObject, const char *topClass): stores the object,
// records its class in the finish map (hkMapBase<hkUlong, hkUlong>::insert, fn_82CEA160) and registers
// m_topLevelObject as a place that points to it (objectPointedBy, through the vtable).
#include "havok/hkPackfileObjectUpdateTracker.h"

extern "C" void fn_82CEA160(void *self, hkMemoryAllocator *alloc, hkUlong key, hkUlong val);   // hkMapBase<hkUlong, hkUlong>::insert

void hkPackfileObjectUpdateTracker::setTopLevelObject(void *topObject, const char *topClass)
{
    m_topLevelObject = topObject;
    fn_82CEA160(&m_finish, &hkMemoryRouter::getInstance().heap(), hkUlong(topObject), hkUlong(topClass));
    objectPointedBy(m_topLevelObject, &m_topLevelObject);
}
