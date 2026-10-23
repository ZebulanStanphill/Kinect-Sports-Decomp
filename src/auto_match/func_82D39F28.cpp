// finishLoadedObjecthkpConvexVerticesConnectivity: the finish function in hkpConvexVerticesConnectivity's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpConvexVerticesConnectivity -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkpConvexVerticesConnectivity : public hkReferencedObject {
public:
    hkpConvexVerticesConnectivity(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

void HK_CALL finishLoadedObjecthkpConvexVerticesConnectivity(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpConvexVerticesConnectivity(f);
}
