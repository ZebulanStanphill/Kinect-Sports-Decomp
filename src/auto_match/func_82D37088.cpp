// hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Collector scalar deleting destructor (an interface without base class: global operator delete). The function at the end only makes the compiler emit the vtable.
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

void emitVtable_82D37088(hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Collector *p) { p->hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Collector::~Collector(); }
