// hkSimpleLocalFrame::~hkSimpleLocalFrame (Common/Base/Types/Geometry/LocalFrame/hkLocalFrame.cpp): releases the children and the group.
#include "havok/hkBase.h"

class __declspec(align(16)) hkVector4 {
public:
    hkReal x, y, z, w;
};

class hkTransform {
public:
    hkVector4 m_rotation[3];
    hkVector4 m_translation;
};

class hkLocalFrameGroup : public hkReferencedObject {
};

class hkLocalFrame : public hkReferencedObject {
public:
    hkLocalFrame(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

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
    // The local copy of this puts the loop's lwzx base first, as in the original (see func_82DF3D70.cpp).
    hkSimpleLocalFrame *self = this;
    int n = self->m_children.getSize();
    for (int i = 0; i < n; i++)
        self->m_children[i]->removeReference();
    if (m_group)
        m_group->removeReference();
}

extern "C" void fn_82CEFFA8(hkSimpleLocalFrame *self) { self->hkSimpleLocalFrame::~hkSimpleLocalFrame(); }
