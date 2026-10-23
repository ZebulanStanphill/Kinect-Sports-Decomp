// finishLoadedObjecthkxVertexFloatDataChannel: the finish function in hkxVertexFloatDataChannel's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkxVertexFloatDataChannel -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkxVertexFloatDataChannel : public hkReferencedObject {
public:
    hkxVertexFloatDataChannel(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

void HK_CALL finishLoadedObjecthkxVertexFloatDataChannel(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxVertexFloatDataChannel(f);
}
