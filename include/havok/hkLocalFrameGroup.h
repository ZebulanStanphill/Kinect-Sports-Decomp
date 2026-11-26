// hkLocalFrameGroup (Common/Base/Types/Geometry/LocalFrame/hkLocalFrame.h), 0xC bytes: a named group that local
// frames belong to. Its layout comes from the finish constructor (82CE45E0, 82CE4608: only m_name's finish
// constructor, fn_82CED308, runs). The destructor is implicit; the scalar deleting destructor (slot 0 of
// ??_7hkLocalFrameGroup@@6B@, 82CE46A0) destroys m_name through fn_82CED5B8. The member name follows Havok's header.
#ifndef HAVOK_HKLOCALFRAMEGROUP_H
#define HAVOK_HKLOCALFRAMEGROUP_H

#include "havok/hkBase.h"

class hkLocalFrameGroup : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkLocalFrameGroup(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag), m_name(flag) {}

    hkStringPtr m_name;   // +0x8
};

#endif
