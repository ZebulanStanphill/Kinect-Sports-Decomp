// finishLoadedObjecthkpSerializedDisplayRbTransforms: the finish function in hkpSerializedDisplayRbTransforms's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpSerializedDisplayRbTransforms -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkpSerializedDisplayRbTransforms : public hkReferencedObject {
public:
    hkpSerializedDisplayRbTransforms(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

void HK_CALL finishLoadedObjecthkpSerializedDisplayRbTransforms(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpSerializedDisplayRbTransforms(f);
}
