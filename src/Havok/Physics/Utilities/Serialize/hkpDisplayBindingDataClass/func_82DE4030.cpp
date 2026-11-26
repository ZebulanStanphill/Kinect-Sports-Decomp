// finishLoadedObjecthkpDisplayBindingData: the finish function in hkpDisplayBindingData's hkTypeInfo, from Havok's
// HK_REFLECTION_DEFINE_VIRTUAL (static in Havok). It runs the finish
// constructor on an object loaded in place. Hierarchy from the RTTI:
// hkpDisplayBindingData -> hkReferencedObject -> hkBaseObject; only the finish constructors are declared.
#include "havok/hkBase.h"
#include "havok/hkpDisplayBindingData.h"

void HK_CALL finishLoadedObjecthkpDisplayBindingData(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpDisplayBindingData(f);
}
