// cleanupLoadedObjecthkpSerializedAgentNnEntry: the cleanup function in hkpSerializedAgentNnEntry's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkpSerializedAgentNnEntry.h"

void HK_CALL cleanupLoadedObjecthkpSerializedAgentNnEntry(void *p)
{
    static_cast<hkpSerializedAgentNnEntry *>(p)->~hkpSerializedAgentNnEntry();
}
