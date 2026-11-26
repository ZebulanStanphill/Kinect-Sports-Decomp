// finishLoadedObjecthkSimpleLocalFrame: the finish function in hkSimpleLocalFrame's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok). Only m_name's finish constructor is out of line (fn_82CED308).
#include "havok/hkBase.h"
#include "havok/hkSimpleLocalFrame.h"

void HK_CALL finishLoadedObjecthkSimpleLocalFrame(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkSimpleLocalFrame(f);
}
