// hkpSimpleConstraintContactMgr::Factory::Factory(hkpWorld *) (Physics/Dynamics/Collide/hkpSimpleConstraintContactMgr.cpp).
#include "havok/hkBase.h"

class hkpWorld;

class hkpContactMgrFactory : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
};

class hkpSimpleConstraintContactMgr {
public:
    class Factory : public hkpContactMgrFactory {
    public:
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
        Factory(hkpWorld *mgr);

        hkpWorld *m_world;   // +0x8
    };
};

hkpSimpleConstraintContactMgr::Factory::Factory(hkpWorld *mgr)
{
    m_world = mgr;
}
