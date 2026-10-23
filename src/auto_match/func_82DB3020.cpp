// hkpAabbTreeWorldLinearCaster<hkAabbTreeData::hkAabbTreeAabb16> scalar
// deleting destructor (Physics/Collide/BroadPhase/AabbTree/...): the implicit
// destructor destroys the four hkAabbTreeQueryUtils<...>::Collector interface
// bases (RTTI order: <Aabb, hkUint16> +0x0, <Aabb16, hkUint16> +0x4,
// <Aabb, hkUint32> +0x8, <Aabb16, hkUint32> +0xC) in reverse, then frees
// through the global operator delete. The function at the end only makes the
// compiler emit the vtable.
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

struct hkAabbTreeData {
    struct hkAabbTreeAabb;
    struct hkAabbTreeAabb16;
};

template <typename BOUNDING_VOLUME, typename IDX>
class hkAabbTreeQueryUtils {
public:
    struct Collector {
        static void operator delete(void *p) { fn_8265CA20(p); }
        virtual ~Collector() {}
    };
};

template <typename BOUNDING_VOLUME>
class hkpAabbTreeWorldLinearCaster
    : public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, hkUint16>::Collector,
      public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, hkUint16>::Collector,
      public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, hkUint32>::Collector,
      public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, hkUint32>::Collector {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    hkpAabbTreeWorldLinearCaster() {}
};

void emitVtable_82DB3020()
{
    hkpAabbTreeWorldLinearCaster<hkAabbTreeData::hkAabbTreeAabb16> c;
}
