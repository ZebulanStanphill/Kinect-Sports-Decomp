// finishLoadedObjecthkxTriangleSelectionChannel: the finish function in hkxTriangleSelectionChannel's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkxTriangleSelectionChannel -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkxTriangleSelectionChannel : public hkReferencedObject {
public:
    hkxTriangleSelectionChannel(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

void HK_CALL finishLoadedObjecthkxTriangleSelectionChannel(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxTriangleSelectionChannel(f);
}
