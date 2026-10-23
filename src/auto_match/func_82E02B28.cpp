// finishLoadedObjecthkxLight: the finish function in hkxLight's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkxLight -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"

class hkxLight : public hkReferencedObject {
public:
    hkxLight(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

void HK_CALL finishLoadedObjecthkxLight(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkxLight(f);
}
