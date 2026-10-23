// hkpWorldCinfo::~hkpWorldCinfo (Physics/Dynamics/World/hkpWorldCinfo.h),
// emitted in a game object (/O1). The user-written (empty) destructor stores
// the vtable, then the three hkRefPtr members release their objects.
// It keeps its fn_ name because a Matching C unit (fn_8253C6B8) calls it: the
// destructor is defined inline and expanded into an extern "C" definition.
#include "havok/hkBase.h"

class hkpCollisionFilter : public hkReferencedObject {};
class hkpConvexListFilter : public hkReferencedObject {};
class hkWorldMemoryAvailableWatchDog : public hkReferencedObject {};

class hkpWorldCinfo : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    // Forced inline so that /O1 expands it into the extern "C" definition.
    virtual HK_FORCE_INLINE ~hkpWorldCinfo() {}

    hkUint8 m_members08[0x50];                                  // +0x08 (not needed here)
    hkRefPtr<hkpCollisionFilter> m_collisionFilter;              // +0x58
    hkRefPtr<hkpConvexListFilter> m_convexListFilter;            // +0x5C
    hkUint8 m_members60[0xC];                                   // +0x60 (not needed here)
    hkRefPtr<hkWorldMemoryAvailableWatchDog> m_memoryWatchDog;   // +0x6C
};

extern "C" void fn_8253C630(hkpWorldCinfo *self)
{
    self->hkpWorldCinfo::~hkpWorldCinfo();
}
