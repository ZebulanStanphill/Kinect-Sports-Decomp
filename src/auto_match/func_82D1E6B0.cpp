// hkGeometryProcessingInternals::NearestFeaturePolicy scalar deleting destructor. NearestFeaturePolicy derives from the interface
// hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector (RTTI) and has
// Havok's non-virtual class allocator, so deleting frees sizeof(NearestFeaturePolicy) = 0x40 bytes to
// the heap. The implicit destructor leaves only the Collector vtable store.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkAabbTreeQueryUtils.h"

class hkGeometryProcessingInternals {
public:
    class NearestFeaturePolicy : public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector {
    public:
        HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, NearestFeaturePolicy);
        hkUint8 m_members[0x3C];   // not needed here; sizeof is 0x40
    };
};

void emitVtable_82D1E6B0(void *p) { new (p) hkGeometryProcessingInternals::NearestFeaturePolicy; }
