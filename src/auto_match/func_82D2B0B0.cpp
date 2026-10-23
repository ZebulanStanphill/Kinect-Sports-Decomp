// hkgpMesh::WeldingPolicy scalar deleting destructor. WeldingPolicy derives from the interface
// hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector (RTTI) and has
// Havok's non-virtual class allocator, so deleting frees sizeof(WeldingPolicy) = 0x30 bytes to
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
    class WeldingPolicy : public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector {
    public:
        HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, WeldingPolicy);
        hkUint8 m_members[0x2C];   // not needed here; sizeof is 0x30
    };
};

void emitVtable_82D2B0B0(void *p) { new (p) hkgpMesh::WeldingPolicy; }
