// getVtablehkTraceStream, from Havok's HK_REFLECTION_DEFINE_VIRTUAL for
// hkTraceStream (static in Havok): builds a finished object in a local buffer
// and returns its vtable pointer. Hierarchy from the RTTI: hkTraceStream ->
// hkReferencedObject, hkSingleton<hkTraceStream> (at +0x8, no vtable).
#include "havok/hkBase.h"

template <typename T>
class hkSingleton {
public:
    static T *s_instance;
};

class hkTraceStream : public hkReferencedObject, public hkSingleton<hkTraceStream> {
public:
    hkTraceStream(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

const void *HK_CALL getVtablehkTraceStream()
{
    union {
        void *ptr;
        char buf[sizeof(hkTraceStream)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkTraceStream(f);
    return u.ptr;
}
