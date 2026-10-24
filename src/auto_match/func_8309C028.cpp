// fn_8309C028: casts a bundle of up to four world rays (hkpWorldRayCastInput/Output) against a kd-tree through
// an hkKdTreeCpuBroadphaseBundleCastCollector (Physics/Collide/...KdTree; the collector's constructor is out of
// line and already has its C++ name in the original object).
// - Havok code: needs "/O2 /QVMXReserve" (v0/v13 vector registers; flag file).
// - hkpShapeRayCastOutput's reset stores m_shapeKeyIndex before m_shapeKeys[0] (the store order shows it).
// - m_hitFraction's 1.0f is lbl_82002AE0 (Matching units reference it, so no __real@3f800000 rename).
// - The ray conversion fn_8309BE28 (a leaf) is in the same file in the original, and the compiler used what it
//   knew about it: with only a declaration the registers of the mask-table load after the call differ
//   (n -> r10 instead of r5). So a static, not inlined copy of it is defined here (its code is close to the
//   original's but not identical; an empty or partial body does not give the caller's code).
#include "havok/hkBase.h"

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    hkQuadReal m_quad;
};

typedef hkUint32 hkpShapeKey;
#define HK_INVALID_SHAPE_KEY 0xffffffff
class hkpCollidable;

extern "C" const float lbl_82002AE0;   // 1.0f

struct hkpShapeRayCastCollectorOutput {
    HK_FORCE_INLINE hkpShapeRayCastCollectorOutput() { reset(); }
    HK_FORCE_INLINE void reset()
    {
        m_hitFraction = lbl_82002AE0;
        m_extraInfo = -1;
    }
    hkVector4 m_normal;     // +0x0
    hkReal m_hitFraction;   // +0x10
    int m_extraInfo;        // +0x14
    int m_pad[2];           // +0x18
};

struct hkpShapeRayCastOutput : public hkpShapeRayCastCollectorOutput {
    enum { MAX_HIERARCHY_DEPTH = 8 };
    HK_FORCE_INLINE hkpShapeRayCastOutput() { _reset(); }
    HK_FORCE_INLINE void _reset()
    {
        m_shapeKeyIndex = 0;
        m_shapeKeys[0] = HK_INVALID_SHAPE_KEY;
    }
    hkpShapeKey m_shapeKeys[MAX_HIERARCHY_DEPTH];   // +0x20
    int m_shapeKeyIndex;                            // +0x40
};

struct hkpWorldRayCastOutput : public hkpShapeRayCastOutput {
    HK_FORCE_INLINE hkpWorldRayCastOutput() : m_rootCollidable(HK_NULL) {}
    const hkpCollidable *m_rootCollidable;   // +0x50
};

struct hkpWorldRayCastInput {
    HK_FORCE_INLINE hkpWorldRayCastInput() : m_enableShapeCollectionFilter(false), m_filterInfo(0) {}
    hkVector4 m_from;                        // +0x0
    hkVector4 m_to;                          // +0x10
    hkBool m_enableShapeCollectionFilter;    // +0x20
    hkUint32 m_filterInfo;                   // +0x24
};

// The ray bundle to cast (the second argument).
struct RayBundleJob {
    hkpWorldRayCastInput m_inputs[4];     // +0x0
    int m_numRays;                        // +0xC0
    hkBool m_flag;                        // +0xC4
    hkpWorldRayCastOutput *m_outputs[4];  // +0xC8
    hkUint32 m_padD8[2];                  // +0xD8
    hkUint32 m_data[4];                   // +0xE0
};

// What the collector reads during the cast.
struct RayBundle {
    hkpWorldRayCastInput m_inputs[4];     // +0x0
    hkBool m_flag;                        // +0xC0
    hkpWorldRayCastOutput *m_outputs;     // +0xC4
    hkUint32 m_padC8[2];                  // +0xC8
    hkUint32 m_data[4];                   // +0xD0
};

class hkKdTreeBundleCastCollector {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkKdTreeBundleCastCollector() {}
};

class hkKdTreeCpuBroadphaseBundleCastCollector : public hkKdTreeBundleCastCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkKdTreeCpuBroadphaseBundleCastCollector);
    hkKdTreeCpuBroadphaseBundleCastCollector();

    void *m_unknown4;           // +0x4
    RayBundleJob *m_job;        // +0x8
    RayBundle *m_bundle;        // +0xC
    hkUint32 m_unknown10[0x18]; // +0x10
    hkUint32 m_filterInfo;      // +0x70
    hkUint32 m_unknown74[3];    // +0x74
    hkUint32 m_data[4];         // +0x80
};

class hkKdTree;
struct hkFourTransposedPoints {
    hkVector4 m_vertices[3];
};

extern "C" {
extern hkUint32 lbl_83180400[];   // hkVector4Comparison masks for 0..4 active rays
hkBool fn_83084820(const hkKdTree *tree, const hkFourTransposedPoints &from, const hkFourTransposedPoints &to,
                   hkKdTreeBundleCastCollector *collector, hkUint32 activeMask);
void fn_8309E8D0(hkKdTreeCpuBroadphaseBundleCastCollector *collector, hkReal *hitFractions);
}

extern "C" __vector4 __vmrghw(__vector4 a, __vector4 b);
extern "C" __vector4 __vmrglw(__vector4 a, __vector4 b);

// HK_TRANSPOSE4 (Common/Base/Math/Vector/Xbox360/hkXbox360MathTypes.inl)
#define HK_TRANSPOSE4(v0, v1, v2, v3) \
    { \
        hkQuadReal tmp0 = __vmrghw(v0.m_quad, v2.m_quad); \
        hkQuadReal tmp1 = __vmrghw(v1.m_quad, v3.m_quad); \
        hkQuadReal tmp2 = __vmrglw(v0.m_quad, v2.m_quad); \
        hkQuadReal tmp3 = __vmrglw(v1.m_quad, v3.m_quad); \
        v0.m_quad = __vmrghw(tmp0, tmp1); \
        v1.m_quad = __vmrglw(tmp0, tmp1); \
        v2.m_quad = __vmrghw(tmp2, tmp3); \
        v3.m_quad = __vmrglw(tmp2, tmp3); \
    }

static HK_FORCE_INLINE void transpose(hkFourTransposedPoints *p, const hkVector4 &last)
{
    hkVector4 v0, v1, v2, v3;
    v0 = p->m_vertices[0];
    v1 = p->m_vertices[1];
    v2 = p->m_vertices[2];
    v3 = last;
    HK_TRANSPOSE4(v0, v1, v2, v3);
    p->m_vertices[0] = v0;
    p->m_vertices[1] = v1;
    p->m_vertices[2] = v2;
}

extern "C" static __declspec(noinline) void fn_8309BE28(const RayBundleJob *job, hkFourTransposedPoints *from, hkFourTransposedPoints *to)
{
    for (int i = 0; i < 3; i++) {
        from->m_vertices[i] = job->m_inputs[i].m_from;
        to->m_vertices[i] = job->m_inputs[i].m_to;
    }
    hkVector4 lastFrom;
    lastFrom = job->m_inputs[3].m_from;
    hkVector4 lastTo;
    lastTo = job->m_inputs[3].m_to;
    transpose(from, lastFrom);
    transpose(to, lastTo);
}

extern "C" void fn_8309C028(const hkKdTree *tree, RayBundleJob *job, void *userData, hkReal *hitFractions)
{
    if (tree) {
        hkpWorldRayCastOutput outputs[4];
        for (int i = 0; i < job->m_numRays; i++)
            outputs[i] = *job->m_outputs[i];

        RayBundle bundle;
        bundle.m_flag = job->m_flag;
        bundle.m_outputs = outputs;
        for (int i = 0; i < job->m_numRays; i++) {
            bundle.m_inputs[i] = job->m_inputs[i];
            bundle.m_outputs[i].m_hitFraction = hitFractions[i];
            bundle.m_data[i] = job->m_data[i];
        }

        hkKdTreeCpuBroadphaseBundleCastCollector collector;
        collector.m_unknown4 = userData;
        collector.m_job = job;
        collector.m_bundle = &bundle;
        collector.m_filterInfo = job->m_inputs[0].m_filterInfo;
        collector.m_data[0] = job->m_data[0];
        collector.m_data[1] = job->m_data[1];
        collector.m_data[2] = job->m_data[2];
        collector.m_data[3] = job->m_data[3];

        hkFourTransposedPoints from, to;
        fn_8309BE28(job, &from, &to);
        fn_83084820(tree, from, to, &collector, lbl_83180400[job->m_numRays]);

        for (int i = 0; i < job->m_numRays; i++) {
            *job->m_outputs[i] = outputs[i];
            job->m_data[i] = bundle.m_data[i];
        }
        fn_8309E8D0(&collector, hitFractions);
    }
}
