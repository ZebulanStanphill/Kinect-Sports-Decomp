// finishLoadedObjecthkpPoweredChainMapper: the finish function in hkpPoweredChainMapper's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpPoweredChainMapper -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkpPoweredChainMapper : public hkReferencedObject {
public:
    hkpPoweredChainMapper(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

void HK_CALL finishLoadedObjecthkpPoweredChainMapper(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpPoweredChainMapper(f);
}
