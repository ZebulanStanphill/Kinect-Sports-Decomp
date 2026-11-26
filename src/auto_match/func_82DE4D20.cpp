// getVtablehkpSerializedAgentNnEntry (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns
// its vtable pointer.
#include "havok/hkBase.h"
#include "havok/hkpSerializedAgentNnEntry.h"

const void *HK_CALL getVtablehkpSerializedAgentNnEntry()
{
    union {
        void *ptr;
        char buf[sizeof(hkpSerializedAgentNnEntry)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkpSerializedAgentNnEntry(f);
    return u.ptr;
}
