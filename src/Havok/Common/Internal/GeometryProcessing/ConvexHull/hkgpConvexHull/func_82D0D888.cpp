#include "havok/hkBase.h"
#include "havok/hkVector4.h"

// hkStridedVertices: m_numVertices points, m_striding bytes apart.
struct StridedVertices_82D0D888 {
    const hkReal *m_vertices; /* 0x0 */
    int m_numVertices;        /* 0x4 */
    int m_striding;           /* 0x8 */
};

struct BuildConfig_82D0D888 {
    hkUint32 m_words[4];
};

struct ConvexHullData_82D0D888 {
    BuildConfig_82D0D888 m_config; /* 0x0 */
};

struct ConvexHull_82D0D888 {
    int m_unk0;
    int m_unk4;
    ConvexHullData_82D0D888 *m_data; /* 0x8 */
};

extern "C" int fn_82D18590(ConvexHullData_82D0D888 *data, const hkVector4 *points, int numPoints, int a,
                           int b);

template <typename T> class Points_82D0D888 : public hkArray<T>
{
  public:
    HK_FORCE_INLINE void _reserve(hkMemoryAllocator &alloc, int n)
    {
        const int cap = this->getCapacity();

        if (cap < n) {
            int cap2 = 2 * cap;
            int newSize = (n < cap2) ? cap2 : n;
            hkArrayUtil::_reserve(alloc, this, newSize, sizeof(T));
        }
    }

    HK_FORCE_INLINE void _setSize(hkMemoryAllocator &alloc, int n)
    {
        _reserve(alloc, n);
        this->m_size = n;
    }

    HK_FORCE_INLINE void setSize(int n)
    {
        _setSize(hkContainerHeapAllocator::get(this), n);
    }
};

static HK_FORCE_INLINE void SetVector(hkVector4 &v, hkReal x, hkReal y, hkReal z, hkReal w)
{
    union {
        hkReal r[4];
        hkQuadReal q;
    } u;

    u.r[0] = x;
    u.r[1] = y;
    u.r[2] = z;
    u.r[3] = w;
    v.m_quad = u.q;
}

static HK_FORCE_INLINE int Build(ConvexHull_82D0D888 *self, const hkVector4 *points, int numPoints,
                                 const BuildConfig_82D0D888 &config)
{
    self->m_data->m_config = config;
    return fn_82D18590(self->m_data, points, numPoints, 0, 0);
}

extern "C" int fn_82D0D888(ConvexHull_82D0D888 *self, const StridedVertices_82D0D888 *vertices,
                           const BuildConfig_82D0D888 *config)
{
    if (vertices->m_striding == sizeof(hkVector4)) {
        return Build(self, (const hkVector4 *)vertices->m_vertices, vertices->m_numVertices, *config);
    } else {
        Points_82D0D888<hkVector4> points;
        const hkReal *v = vertices->m_vertices;

        points.setSize(vertices->m_numVertices);
        for (int i = 0; i < vertices->m_numVertices; i++) {
            SetVector(points[i], v[0], v[1], v[2], 0.0f);
            v = (const hkReal *)((const char *)v + vertices->m_striding);
        }
        return Build(self, points.getSize() ? points.begin() : HK_NULL, points.getSize(), *config);
    }
}
