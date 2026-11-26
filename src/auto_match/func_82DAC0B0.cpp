// hkpSimpleConstraintContactMgr::Factory::Factory(hkpWorld *) (Physics/Dynamics/Collide/hkpSimpleConstraintContactMgr.cpp).
#include "havok/hkBase.h"
#include "havok/hkpSimpleConstraintContactMgr.h"

hkpSimpleConstraintContactMgr::Factory::Factory(hkpWorld *mgr)
{
    m_world = mgr;
}
