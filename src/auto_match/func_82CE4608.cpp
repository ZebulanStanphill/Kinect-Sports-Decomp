// getVtablehkLocalFrameGroup (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns its vtable pointer.
#include "havok/hkBase.h"

class hkLocalFrameGroup : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkLocalFrameGroup(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag), m_name(flag) {}

    hkStringPtr m_name;   // +0x8
};

const void *HK_CALL getVtablehkLocalFrameGroup()
{
    union {
        void *ptr;
        char buf[sizeof(hkLocalFrameGroup)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkLocalFrameGroup(f);
    return u.ptr;
}
