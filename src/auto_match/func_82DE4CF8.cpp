// finishLoadedObjecthkpSerializedAgentNnEntry: the finish function in hkpSerializedAgentNnEntry's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok);
// the atom's finish constructor (fn_82D9FE90) ends it as a tail call.
#include "havok/hkBase.h"
#include "havok/hkpSerializedAgentNnEntry.h"

void HK_CALL finishLoadedObjecthkpSerializedAgentNnEntry(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpSerializedAgentNnEntry(f);
}
