// hkGeometryProcessingInternals::NearestFeaturePolicy scalar deleting destructor. NearestFeaturePolicy derives from
// hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, unsigned int>::ClosestPointCollector (RTTI) and has
// Havok's non-virtual class allocator, so deleting frees sizeof(NearestFeaturePolicy) = 0x40 bytes to
// the heap. The implicit destructor leaves only the Collector vtable store.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkAabb.h"
#include "havok/hkAabbTreeQueryUtils.h"

class hkGeometryProcessingInternals {
public:
    class NearestFeaturePolicy : public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, unsigned int>::ClosestPointCollector {
    public:
        HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, NearestFeaturePolicy);
        // The callback (82D1E5F8) takes the squared distance of m_point to the centre of each leaf's box.
        const hkAabb *m_closest;         // +0x30, the box of the nearest leaf
    };
};

void emitVtable_82D1E6B0(void *p) { new (p) hkGeometryProcessingInternals::NearestFeaturePolicy; }
