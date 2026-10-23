// finishLoadedObjecthkSimpleLocalFrame: the finish function in hkSimpleLocalFrame's hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok). Only m_name's finish constructor is out of line (fn_82CED308).
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

void HK_CALL finishLoadedObjecthkSimpleLocalFrame(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkSimpleLocalFrame(f);
}
