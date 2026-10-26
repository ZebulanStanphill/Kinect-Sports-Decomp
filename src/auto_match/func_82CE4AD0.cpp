// cleanupLoadedObjecthkTraceStream: the cleanup function in hkTraceStream's hkTypeInfo
// (HK_REFLECTION_DEFINE_*, Common/Base/Reflection/hkTypeInfo.h). Destroys a loaded object in
// place through its virtual destructor.
#include "havok/hkBaseTypes.h"

// Only the virtual destructor is needed here.
class hkTraceStream {
public:
    virtual ~hkTraceStream();
};

void HK_CALL cleanupLoadedObjecthkTraceStream(void *p)
{
    static_cast<hkTraceStream *>(p)->~hkTraceStream();
}
