// hkpReportContactMgr::Factory::Factory(hkpWorld *) (Physics/Dynamics/Collide/ContactListener/Util/hkpReportContactMgr.cpp).
#include "havok/hkBase.h"

class hkpWorld;

class hkpContactMgrFactory : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
};

class hkpReportContactMgr {
public:
    class Factory : public hkpContactMgrFactory {
    public:
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
        Factory(hkpWorld *mgr);

        hkpWorld *m_world;   // +0x8
    };
};

hkpReportContactMgr::Factory::Factory(hkpWorld *mgr)
{
    m_world = mgr;
}
