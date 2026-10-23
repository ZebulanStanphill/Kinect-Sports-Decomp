// hkpWorld::hkpWorld(hkFinishLoadedObjectFlag) (Physics/Dynamics/World/hkpWorld.h), used by hkpWorld's
// getVtable (fn_82D800C0) and finishLoadedObject (fn_82D80098) functions. The world is not serialised:
// the constructor runs hkReferencedObject's default constructor (m_referenceCount = 1) and
// default-constructs the members that have constructors (the hkArrays, a null pointer at +0x50 and the
// multithread check at +0xA8); everything else is left alone. It keeps its fn_ name (a Matching C unit
// calls it), so the constructor is expanded into an extern "C" definition. Member names are not
// confirmed; untouched members are padding.
#include "havok/hkBase.h"

class hkpEntity;
class hkpPhantom;
class hkpConstraintInstance;
class hkpAction;

// Common/Base/DebugUtil/MultiThreadCheck/hkMultiThreadCheck.h
class hkMultiThreadCheck {
public:
    enum { UNMARKED = 0xffffffd1 };
    HK_FORCE_INLINE hkMultiThreadCheck() : m_threadId(hkUint32(UNMARKED)), m_markCount(0) {}
    hkUint32 m_threadId;   // +0x0
    hkInt16 m_markCount;   // +0x4
    hkUint16 m_markBitStack;
};

class hkpWorld : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_WORLD);
    HK_FORCE_INLINE hkpWorld(hkFinishLoadedObjectFlag flag) {}
    virtual ~hkpWorld();

    hkUint8 m_pad08[0x20];                         // +0x08
    hkArray<void *> m_array28;                     // +0x28
    hkArray<void *> m_array34;                     // +0x34
    hkArray<void *> m_array40;                     // +0x40
    hkUint8 m_pad4c[0x4];                          // +0x4C
    hkRefPtr<hkReferencedObject> m_ptr50;          // +0x50
    hkUint8 m_pad54[0x54];                         // +0x54
    hkMultiThreadCheck m_multiThreadCheck;         // +0xA8
    hkUint8 m_padb0[0x70];                         // +0xB0
    hkArray<void *> m_array120;                     // +0x120
    hkArray<void *> m_array12C;                     // +0x12C
    hkArray<void *> m_array138;                     // +0x138
    hkArray<void *> m_array144;                     // +0x144
    hkArray<void *> m_array150;                     // +0x150
    hkArray<void *> m_array15C;                     // +0x15C
    hkArray<void *> m_array168;                     // +0x168
    hkArray<void *> m_array174;                     // +0x174
    hkArray<void *> m_array180;                     // +0x180
    hkArray<void *> m_array18C;                     // +0x18C
    hkArray<void *> m_array198;                     // +0x198
    hkArray<void *> m_array1A4;                     // +0x1A4
    hkArray<void *> m_array1B0;                     // +0x1B0
};

extern "C" hkpWorld *fn_82D845F0(hkpWorld *self, hkFinishLoadedObjectFlag flag)
{
    self->hkpWorld::hkpWorld(flag);
    return self;
}
