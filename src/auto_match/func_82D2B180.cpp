// hkgpMesh::NearestFeaturePolicy scalar deleting destructor. NearestFeaturePolicy derives from the interface
// hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector (RTTI) and has
// Havok's non-virtual class allocator, so deleting frees sizeof(NearestFeaturePolicy) = 0x60 bytes to
// the heap. The implicit destructor leaves only the Collector vtable store.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

struct hkAabbTreeData {
    struct hkAabbTreeAabb;
    struct hkAabbTreeAabb16;
};

// hkAabbTreeQueryUtils<BOUNDING_VOLUME, IDX> (Common/Internal/...AabbTree):
// its query collector interfaces have no base class and free through the
// global operator delete.
template <typename BOUNDING_VOLUME, typename IDX>
class hkAabbTreeQueryUtils {
public:
    class Collector {
    public:
        static void operator delete(void *p) { fn_8265CA20(p); }
        virtual ~Collector() {}
    };
    class TreeTreeCollector {
    public:
        static void operator delete(void *p) { fn_8265CA20(p); }
        virtual ~TreeTreeCollector() {}
    };
};

class hkgpMesh {
public:
    class NearestFeaturePolicy : public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector {
    public:
        HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, NearestFeaturePolicy);
        hkUint8 m_members[0x5C];   // not needed here; sizeof is 0x60
    };
};

void emitVtable_82D2B180(void *p) { new (p) hkgpMesh::NearestFeaturePolicy; }
