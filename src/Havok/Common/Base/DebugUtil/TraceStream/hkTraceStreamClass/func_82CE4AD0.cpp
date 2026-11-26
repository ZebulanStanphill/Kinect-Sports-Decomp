// cleanupLoadedObjecthkTraceStream: the cleanup function in hkTraceStream's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkTraceStream.h"

void HK_CALL cleanupLoadedObjecthkTraceStream(void *p)
{
    static_cast<hkTraceStream *>(p)->~hkTraceStream();
}
