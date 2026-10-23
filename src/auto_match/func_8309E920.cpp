// hkKdTreeCpuBroadphaseBundleCastCollector::hkKdTreeCpuBroadphaseBundleCastCollector(): clears seven words.
// Kd-tree bundle cast collectors (Common/Internal/KdTree?): hkKdTreeBundleCastCollector
// is a root interface (RTTI) freed through the global operator delete; the
// subclasses use Havok's non-virtual class allocator (their deleting
// destructors free sizeof bytes: 0x14 and 0x90). Member names are not known;
// the constructors clear the words below.
#include "havok/hkBase.h"

class hkKdTreeBundleCastCollector {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkKdTreeBundleCastCollector() {}
};

class hkKdTreeCollidableRayBundleCaster : public hkKdTreeBundleCastCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkKdTreeCollidableRayBundleCaster);
    hkKdTreeCollidableRayBundleCaster();

    void *m_unknown4;    // +0x4
    void *m_unknown8;    // +0x8
    void *m_unknownC;    // +0xC
    void *m_unknown10;   // +0x10
};

class hkKdTreeCpuBroadphaseBundleCastCollector : public hkKdTreeBundleCastCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkKdTreeCpuBroadphaseBundleCastCollector);
    hkKdTreeCpuBroadphaseBundleCastCollector();

    hkUint32 m_unknown4[2];    // +0x4
    void *m_unknownC;          // +0xC
    hkUint32 m_unknown10[0x18];   // +0x10
    void *m_unknown70;         // +0x70
    void *m_unknown74;         // +0x74
    hkUint32 m_unknown78[2];   // +0x78
    void *m_unknown80;         // +0x80
    void *m_unknown84;         // +0x84
    void *m_unknown88;         // +0x88
    void *m_unknown8C;         // +0x8C
};

hkKdTreeCpuBroadphaseBundleCastCollector::hkKdTreeCpuBroadphaseBundleCastCollector()
    : m_unknownC(HK_NULL), m_unknown70(HK_NULL), m_unknown74(HK_NULL), m_unknown80(HK_NULL), m_unknown84(HK_NULL),
      m_unknown88(HK_NULL), m_unknown8C(HK_NULL) {}
