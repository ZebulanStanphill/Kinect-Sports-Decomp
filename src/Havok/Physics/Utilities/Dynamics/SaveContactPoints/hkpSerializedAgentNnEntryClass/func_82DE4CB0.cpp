// cleanupLoadedObjecthkpSerializedAgentNnEntry: the cleanup function in hkpSerializedAgentNnEntry's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkpSerializedAgentNnEntry {
public:
    virtual ~hkpSerializedAgentNnEntry();
};

void HK_CALL cleanupLoadedObjecthkpSerializedAgentNnEntry(void *p)
{
    static_cast<hkpSerializedAgentNnEntry *>(p)->~hkpSerializedAgentNnEntry();
}
