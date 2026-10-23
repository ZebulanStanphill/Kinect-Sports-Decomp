// hkpFixedBufferRayHitCollector's scalar deleting destructor (vtable slot 1): the implicit destructor leaves hkpRayHitCollector's vtable store, then the non-virtual class allocator frees 0x1C bytes. The function at the end only makes the compiler emit the vtable.
// hkpRayHitCollector (a root interface, RTTI; its destructor is in vtable slot
// 1) and hkpFixedBufferRayHitCollector (0x1C bytes, Havok's non-virtual class
// allocator: its deleting destructor frees 0x1C bytes). The members follow the
// constructor inlined in fn_83098750/fn_8309BF18 (buffer at +0x8 and +0xC,
// capacity at +0x10, two words cleared).
#include "havok/hkBase.h"

class hkpCdBody;
struct hkpShapeRayCastCollectorOutput;
struct hkpWorldRayCastOutput;
class hkpCollidable;

class hkpRayHitCollector {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual void addRayHit(const hkpCdBody &cdBody, const hkpShapeRayCastCollectorOutput &hitInfo);   // +0x0 (pure)
    virtual ~hkpRayHitCollector() {}                                                                 // +0x4
    hkReal m_earlyOutHitFraction;   // +0x4
};

class hkpFixedBufferRayHitCollector : public hkpRayHitCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpFixedBufferRayHitCollector);
    HK_FORCE_INLINE hkpFixedBufferRayHitCollector(hkpWorldRayCastOutput *buffer, int capacity)
        : m_rayCastOutputBase(buffer), m_nextFreeOutput(buffer), m_capacity(capacity), m_numOutputs(0),
          m_collidableOnPpu(HK_NULL) {}
    virtual void addRayHit(const hkpCdBody &cdBody, const hkpShapeRayCastCollectorOutput &hitInfo);

    hkpWorldRayCastOutput *m_rayCastOutputBase;   // +0x8
    hkpWorldRayCastOutput *m_nextFreeOutput;      // +0xC
    int m_capacity;                               // +0x10
    int m_numOutputs;                             // +0x14
    const hkpCollidable *m_collidableOnPpu;       // +0x18
};

void emitVtable_830983E0(void *p) { new (p) hkpFixedBufferRayHitCollector(HK_NULL, 0); }
