// finishLoadedObjecthkpSerializedDisplayMarkerList: the finish function in hkpSerializedDisplayMarkerList's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpSerializedDisplayMarkerList -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkpSerializedDisplayMarkerList : public hkReferencedObject {
public:
    hkpSerializedDisplayMarkerList(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

void HK_CALL finishLoadedObjecthkpSerializedDisplayMarkerList(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpSerializedDisplayMarkerList(f);
}
