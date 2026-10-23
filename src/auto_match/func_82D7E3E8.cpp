// hkpAabbPhantom::hkpAabbPhantom(hkFinishLoadedObjectFlag), the serialization
// "finish" constructor (Physics/Dynamics/Phantom/hkpAabbPhantom.h). The +nosave
// arrays are default-constructed; the hkpPhantom vtable store is dead and removed.
#include "havok/hkBase.h"

extern "C" {
void fn_82D93708(void *self, hkFinishLoadedObjectFlag flag);   // hkpWorldObject::hkpWorldObject(hkFinishLoadedObjectFlag)
void fn_82D7E1E0(void *self);
}

// Stand-in for the hkpWorldObject base, whose constructor is out of line
// (fn_82D93708). It is non-polymorphic so that its inline constructor stores no
// vtable; MSVC then puts the derived vfptr at +0 and this block at +4.
struct hkpWorldObjectBase {
    HK_FORCE_INLINE hkpWorldObjectBase(hkFinishLoadedObjectFlag flag) { fn_82D93708((char *)this - 4, flag); }
    char m_data[0x8c - 4];
};

class hkpPhantom : public hkpWorldObjectBase {
public:
    HK_FORCE_INLINE hkpPhantom(hkFinishLoadedObjectFlag flag) : hkpWorldObjectBase(flag) {}
    virtual ~hkpPhantom();
    hkArray<void *> m_overlapListeners;   // +0x8c
    hkArray<void *> m_phantomListeners;   // +0x98
};

class hkpAabbPhantom : public hkpPhantom {
public:
    HK_FORCE_INLINE hkpAabbPhantom(hkFinishLoadedObjectFlag flag) : hkpPhantom(flag)
    {
        if (flag.m_finishing) {
            fn_82D7E1E0(this);
        }
    }
    virtual ~hkpAabbPhantom();
    char m_aabb[0xd0 - 0xa4];
    hkArray<void *> m_overlappingCollidables;   // +0xd0
    hkBool m_orderDirty;
};

extern "C" hkpAabbPhantom *fn_82D7E3E8(hkpAabbPhantom *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpAabbPhantom::hkpAabbPhantom(flag);
    return self;
}
