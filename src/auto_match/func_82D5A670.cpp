// hkpHeightFieldAgent::hkpHeightFieldAgent(const hkpCdBody &, const hkpCdBody &, const hkpCollisionInput &,
// hkpContactMgr *) (Physics/Collide/Agent/MiscAgent/HeightField/hkpHeightFieldAgent.cpp): with a contact
// manager, one contact point id per collision sphere of body A's shape, all HK_INVALID_CONTACT_POINT.
// hkArray::setSize(n, fill) is inlined: the allocator is fetched first, the capacity is doubled or set to n
// through hkArrayUtil::_reserve , then the new items are filled.
#include "havok/hkpHeightFieldAgent.h"

hkpHeightFieldAgent::hkpHeightFieldAgent(const hkpCdBody &A, const hkpCdBody &B, const hkpCollisionInput &input,
                                         hkpContactMgr *mgr)
    : hkpCollisionAgent(mgr)
{
    if (mgr) {
        const hkpSphereRepShape *sphereShape = static_cast<const hkpSphereRepShape *>(A.getShape());
        int numSpheres = sphereShape->getNumCollisionSpheres();
        m_contactPointId.setSize(numSpheres, HK_INVALID_CONTACT_POINT);
    }
}
