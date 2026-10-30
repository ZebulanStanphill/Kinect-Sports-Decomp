// Adjustor thunk in hkCpuWorldLinearCastCollector's vtable for its hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector subobject (+0x10): subtract
// the offset and tail-call the scalar deleting destructor ??_GhkCpuWorldLinearCastCollector@@UAAPAXI@Z (0x83099C88).
// A qualified call of MSVC's member name for the scalar deleting destructor, __delDtor,
// references ??_G directly; the adjustment is plain arithmetic (a static_cast adds a null check).
// The classes and their bases are those of the game's RTTI (??_R2 base class arrays), at their
// RTTI offsets; padding stands for members this unit does not use. The thunk keeps its fn_ name.
#include "havok/hkBase.h"
class hkpBroadPhaseCastCollector {
public:
    virtual ~hkpBroadPhaseCastCollector();
};
class hkKdTreeCastCollector {
public:
    virtual ~hkKdTreeCastCollector();
};
template <class T0, class T1> struct hkAabbTreeQueryUtils { struct Collector; };
namespace hkAabbTreeData {
struct hkAabbTreeAabb;
}
template <> struct hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, unsigned short>::Collector {
    virtual ~Collector();
};
namespace hkAabbTreeData {
struct hkAabbTreeAabb16;
}
template <> struct hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Collector {
    virtual ~Collector();
};
template <> struct hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector {
    virtual ~Collector();
};
template <> struct hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, unsigned int>::Collector {
    virtual ~Collector();
};
class hkCpuWorldLinearCastCollector : public hkpBroadPhaseCastCollector, public hkKdTreeCastCollector, public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, unsigned short>::Collector, public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, unsigned short>::Collector, public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector, public hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb16, unsigned int>::Collector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkCpuWorldLinearCastCollector);
    char _pad[0x88];
};

extern "C" void *fn_83099B98(hkAabbTreeQueryUtils<hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Collector *self, unsigned int flags)
{
    hkCpuWorldLinearCastCollector *obj = (hkCpuWorldLinearCastCollector *)((char *)self - 0x10);
    return obj->hkCpuWorldLinearCastCollector::__delDtor(flags);
}
