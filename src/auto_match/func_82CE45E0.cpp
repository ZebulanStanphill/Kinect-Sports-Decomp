// finishLoadedObjecthkLocalFrameGroup: the finish function in hkLocalFrameGroup's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok). The member's finish constructor is out of line (fn_82CED308) and ends in a tail call.
#include "havok/hkBase.h"

class hkLocalFrameGroup : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkLocalFrameGroup(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag), m_name(flag) {}

    hkStringPtr m_name;   // +0x8
};

void HK_CALL finishLoadedObjecthkLocalFrameGroup(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkLocalFrameGroup(f);
}
