// hkSimpleLocalFrame (Common/Base/Types/Geometry/LocalFrame/hkLocalFrame.h), 0x68 bytes: a local frame with a
// transform, child frames, a parent, a group and a name. The layout comes from the finish constructor
// (82CE4640, 82CE4668) and the destructor (82CEFFA8). The member names follow Havok's header.
// The destructor is out of line in the game but keeps its fn_ name (fn_82CEFFA8; the scalar deleting destructor
// 82CE4738 calls it), so it is defined here, forced inline, and 82CEFFA8 expands it into its extern "C" definition.
// It releases the children and the group; m_name and m_children are then destroyed by their own destructors.
// The eleven slots of hkLocalFrame that the vtable (??_7hkSimpleLocalFrame@@6B@, 14 slots) overrides are not
// declared yet (see hkLocalFrame.h).
#ifndef HAVOK_HKSIMPLELOCALFRAME_H
#define HAVOK_HKSIMPLELOCALFRAME_H

#include "havok/hkBase.h"
#include "havok/hkTransform.h"
#include "havok/hkLocalFrame.h"
#include "havok/hkLocalFrameGroup.h"

class hkSimpleLocalFrame : public hkLocalFrame {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkSimpleLocalFrame(hkFinishLoadedObjectFlag flag)
        : hkLocalFrame(flag), m_children(flag), m_name(flag) {}
    virtual HK_FORCE_INLINE ~hkSimpleLocalFrame();

    hkTransform m_transform;                 // +0x10
    hkArray<hkLocalFrame *> m_children;      // +0x50
    const hkLocalFrame *m_parentFrame;       // +0x5C
    const hkLocalFrameGroup *m_group;        // +0x60
    hkStringPtr m_name;                      // +0x64
};

HK_FORCE_INLINE hkSimpleLocalFrame::~hkSimpleLocalFrame()
{
    // Reading the children through a local copy of this puts the loop's lwzx base first, as in the original
    // (see func_82DF3D70.cpp).
    hkSimpleLocalFrame *self = this;
    int n = self->m_children.getSize();
    for (int i = 0; i < n; i++)
        self->m_children[i]->removeReference();
    if (m_group)
        m_group->removeReference();
}

#endif
