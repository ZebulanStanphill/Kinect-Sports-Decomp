// Adjustor thunk in hkpPhantomBroadPhaseListener's hkpBroadPhaseListener vtable (subobject at +0x8): adjusts this
// and tail-calls the scalar deleting destructor with the same flags. The compiler emits it with the vtable as
// ??_EhkpPhantomBroadPhaseListener@@W7AAPAXI@Z, branching to the weak alias ??_EhkpPhantomBroadPhaseListener@@UAAPAXI@Z,
// while symbols.txt names that address after the scalar deleting destructor (??_G..., func_82D89858.cpp). A qualified
// call of MSVC's scalar deleting destructor member __delDtor references ??_G directly; at the unit's /O1 it stays a
// tail call (/O2 inlines the 0x70-byte ??_G). The class declarations are those of func_82D89858.cpp, without its
// vtable trigger.
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpWorld;
struct hkpTypedBroadPhaseHandlePair;

class hkpBroadPhaseListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpBroadPhaseListener() {}
    virtual void addCollisionPair(hkpTypedBroadPhaseHandlePair &pair) = 0;
    virtual void removeCollisionPair(hkpTypedBroadPhaseHandlePair &pair) = 0;
};

class hkpPhantomBroadPhaseListener : public hkReferencedObject, public hkpBroadPhaseListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpPhantomBroadPhaseListener(hkpWorld *world) {}
    virtual void addCollisionPair(hkpTypedBroadPhaseHandlePair &pair);
    virtual void removeCollisionPair(hkpTypedBroadPhaseHandlePair &pair);
};

extern "C" void *fn_82D89770(char *self, unsigned int flags)
{
    return ((hkpPhantomBroadPhaseListener *)(self - 0x8))->hkpPhantomBroadPhaseListener::__delDtor(flags);
}
