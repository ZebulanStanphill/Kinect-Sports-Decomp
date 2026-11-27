// hkpDynamicsContactMgr (Physics/Dynamics/Collide/hkpDynamicsContactMgr.h): the contact manager of the dynamics
// layer, which hkpSimpleConstraintContactMgr and hkpReportContactMgr derive from. It adds no members. Its
// nine virtual functions (+0x28 to +0x48 in the two subclasses' vtables) are not named by any unit and not
// declared.
#ifndef HAVOK_HKPDYNAMICSCONTACTMGR_H
#define HAVOK_HKPDYNAMICSCONTACTMGR_H

#include "havok/hkpContactMgr.h"

class hkpDynamicsContactMgr : public hkpContactMgr {
public:
    hkpDynamicsContactMgr(Type type) : hkpContactMgr(type) {}
};

#endif
