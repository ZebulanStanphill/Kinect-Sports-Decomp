// PackfileCstringListener's scalar deleting destructor, written out under its fn_ name (the class is in an anonymous namespace): the implicit destructor (the map, then ObjectListener's), then the global operator delete. Identical code folding shares it with PackfileObjectsCollector.
// hkObjectInspector::ObjectListener (Common/Serialize/Util/hkObjectInspector.h):
// a root interface (RTTI: no bases) with a user-written destructor; deleting
// one uses the global operator delete (fn_8265CA20). The packfile listeners
// deriving from it are in an anonymous namespace of hkBinaryPackfileWriter.cpp
// (?A0x11ff29d5), whose mangled names a unit cannot reproduce, so their
// functions keep their fn_ names. Members before the maps are not known.
#include "havok/hkBase.h"

class hkObjectInspector {
public:
    class ObjectListener {
    public:
        static void operator delete(void *p) { fn_8265CA20(p); }
        virtual ~ObjectListener() {}
        virtual int objectCallback(const void *objP, const hkClass &klass, void *p) = 0;
    };
};

namespace {

// PackfilePointersMapListener (0x24 bytes at least): a pointer map at +0x18.
class PackfilePointersMapListener : public hkObjectInspector::ObjectListener {
public:
    virtual int objectCallback(const void *objP, const hkClass &klass, void *p);

    hkUint32 m_unknown4[5];                     // +0x4
    hkPointerMap<const void *, int> m_map;      // +0x18
};

// PackfileObjectsCollector, PackfileCstringListener: a pointer map at +0xC
// (their deleting destructors are folded).
class PackfileCstringListener : public hkObjectInspector::ObjectListener {
public:
    virtual int objectCallback(const void *objP, const hkClass &klass, void *p);

    hkUint32 m_unknown4[2];                     // +0x4
    hkPointerMap<const void *, int> m_map;      // +0xC
};

}

extern "C" void *fn_82E0E048(PackfileCstringListener *self, unsigned int flags)
{
    self->PackfileCstringListener::~PackfileCstringListener();
    if (flags & 1)
        PackfileCstringListener::operator delete(self);
    return self;
}
