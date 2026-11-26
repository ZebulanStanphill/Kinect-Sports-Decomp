// hkpReportContactMgr::Factory::Factory(hkpWorld *) (Physics/Dynamics/Collide/ContactListener/Util/hkpReportContactMgr.cpp).
#include "havok/hkBase.h"
#include "havok/hkpReportContactMgr.h"

hkpReportContactMgr::Factory::Factory(hkpWorld *mgr)
{
    m_world = mgr;
}
