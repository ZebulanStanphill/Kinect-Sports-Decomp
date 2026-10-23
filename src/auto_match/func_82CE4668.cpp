// getVtablehkSimpleLocalFrame (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns its vtable pointer.
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

class hkLocalFrameGroup;

class hkLocalFrame : public hkReferencedObject {
public:
    hkLocalFrame(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
};

class hkSimpleLocalFrame : public hkLocalFrame {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkSimpleLocalFrame(hkFinishLoadedObjectFlag flag)
        : hkLocalFrame(flag), m_children(flag), m_name(flag) {}

    hkTransform m_transform;                 // +0x10
    hkArray<hkLocalFrame *> m_children;      // +0x50
    const hkLocalFrame *m_parentFrame;       // +0x5C
    const hkLocalFrameGroup *m_group;        // +0x60
    hkStringPtr m_name;                      // +0x64
};

const void *HK_CALL getVtablehkSimpleLocalFrame()
{
    union {
        void *ptr;
        char buf[sizeof(hkSimpleLocalFrame)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkSimpleLocalFrame(f);
    return u.ptr;
}
