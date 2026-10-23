// finishLoadedObjecthkpSerializedDisplayMarker: the finish function in hkpSerializedDisplayMarker's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpSerializedDisplayMarker -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkpSerializedDisplayMarker : public hkReferencedObject {
public:
    hkpSerializedDisplayMarker(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

void HK_CALL finishLoadedObjecthkpSerializedDisplayMarker(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpSerializedDisplayMarker(f);
}
