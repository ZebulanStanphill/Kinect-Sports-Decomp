// hkpAabbTreeCollidableRaycaster scalar deleting destructor. The class derives from the four
// hkAabbTreeQueryUtils<...>::Collector interfaces (RTTI order and offsets) and has Havok's
// non-virtual class allocator, so deleting frees sizeof(hkpAabbTreeCollidableRaycaster) = 0x28
// bytes to the heap. The implicit destructor leaves only the bases' vtable stores, last base first.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

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

class hkpAabbTreeCollidableRaycaster : public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, hkUint16>::Collector,
                                       public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, hkUint16>::Collector,
                                       public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, hkUint32>::Collector,
                                       public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, hkUint32>::Collector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpAabbTreeCollidableRaycaster);
    hkUint8 m_members[0x18];   // not needed here; sizeof is 0x28
};

void emitVtable_83097030(void *p) { new (p) hkpAabbTreeCollidableRaycaster; }
