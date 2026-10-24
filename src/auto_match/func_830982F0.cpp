// hkCpuWorldRayCastCollector::hkCpuWorldRayCastCollector(). The class derives from the collector
// interfaces hkpBroadPhaseCastCollector, hkKdTreeCastCollector and the four
// hkAabbTreeQueryUtils<...>::Collector interfaces (RTTI order and offsets; sizeof 0x90, see
// func_830990F0.cpp). The base constructors' vtable stores stay, except the first base's.
// Members: an hkpShapeRayCastInput at +0x40 (its constructor clears m_filterInfo and
// m_rayShapeCollectionFilter), the early-out fraction (1.0f) at +0x1c, a flag at +0x20 and a
// pointer at +0x70, the last three set in the body.
// The source used the literal 1.0f; the game's copy of that constant is lbl_82002AE0, declared
// here with its value so the compiler schedules its load as the original does (plain extern:
// load after the member constructor's stores, 83%).
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete
extern "C" __declspec(selectany) const float lbl_82002AE0 = 1.0f;

struct __declspec(align(16)) hkVector4 { hkReal m_quad[4]; };

struct hkAabbTreeData {
    struct hkAabbTreeAabb;
    struct hkAabbTreeAabb16;
};

template <typename BOUNDING_VOLUME, typename IDX>
class hkAabbTreeQueryUtils {
public:
    class Collector {
    public:
        static void operator delete(void *p) { fn_8265CA20(p); }
        virtual ~Collector() {}
    };
};

class hkpBroadPhaseCastCollector {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpBroadPhaseCastCollector() {}
};

class hkKdTreeCastCollector {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkKdTreeCastCollector() {}
};

struct hkpShapeRayCastInput {
    HK_FORCE_INLINE hkpShapeRayCastInput() : m_filterInfo(0), m_rayShapeCollectionFilter(HK_NULL) {}
    hkVector4 m_from;
    hkVector4 m_to;
    hkUint32 m_filterInfo;
    const void *m_rayShapeCollectionFilter;
};

class hkCpuWorldRayCastCollector : public hkpBroadPhaseCastCollector,
                                   public hkKdTreeCastCollector,
                                   public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, hkUint16>::Collector,
                                   public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, hkUint16>::Collector,
                                   public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, hkUint32>::Collector,
                                   public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, hkUint32>::Collector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkCpuWorldRayCastCollector);
    hkCpuWorldRayCastCollector();

    const void *m_originalInput;          // +0x18
    hkReal m_earlyOutHitFraction;         // +0x1c
    hkBool m_hit;                         // +0x20
    hkUint8 m_pad21[0x1f];
    hkpShapeRayCastInput m_shapeInput;    // +0x40
    void *m_result;                       // +0x70
    hkUint8 m_pad74[0x1c];
};

hkCpuWorldRayCastCollector::hkCpuWorldRayCastCollector()
{
    m_earlyOutHitFraction = lbl_82002AE0;
    m_result = HK_NULL;
    m_hit = false;
}
