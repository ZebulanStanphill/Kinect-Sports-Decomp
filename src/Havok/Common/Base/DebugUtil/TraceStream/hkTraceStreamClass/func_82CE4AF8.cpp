// finishLoadedObjecthkTraceStream: the finish function in hkTraceStream's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok).
#include "havok/hkBase.h"
#include "havok/hkSingleton.h"

class hkTraceStream : public hkReferencedObject, public hkSingleton<hkTraceStream> {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    // The finish constructor runs hkReferencedObject's default constructor
    // (m_referenceCount = 1).
    hkTraceStream(hkFinishLoadedObjectFlag flag) {}
};

void HK_CALL finishLoadedObjecthkTraceStream(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkTraceStream(f);
}
