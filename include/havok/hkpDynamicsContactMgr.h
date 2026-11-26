// hkpDynamicsContactMgr (Physics/Dynamics/Collide/hkpDynamicsContactMgr.h): the contact manager of the dynamics
// layer, which hkpSimpleConstraintContactMgr and hkpReportContactMgr derive from. It adds no members; its
// virtual functions are not named by any unit.
#ifndef HAVOK_HKPDYNAMICSCONTACTMGR_H
#define HAVOK_HKPDYNAMICSCONTACTMGR_H

#include "havok/hkpContactMgr.h"

class hkpDynamicsContactMgr : public hkpContactMgr {
public:
    hkpDynamicsContactMgr(Type type) : hkpContactMgr(type) {}
};

#endif
