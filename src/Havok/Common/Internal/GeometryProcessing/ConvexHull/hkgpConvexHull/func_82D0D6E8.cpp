// hkgpConvexHull::hkgpConvexHull() (hkgpConvexHull.cpp). It keeps its fn_ name because Matching C units (fn_82D08138, fn_82D1BCD8) call it; the inline constructor is run with an explicit constructor call (MSVC accepts self->C::C()), which has no placement-new null check. hkgpConvexHullImpl's constructor fn_82D16868 also keeps its fn_ name.
#include "havok/hkBase.h"

class hkgpConvexHullImpl;
extern "C" hkgpConvexHullImpl *fn_82D16868(hkgpConvexHullImpl *self);

class hkgpConvexHullImpl {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES, hkgpConvexHullImpl);
    hkUint8 m_members[0x1C0];
};

static HK_FORCE_INLINE hkgpConvexHullImpl *newImpl()
{
    void *p = hkgpConvexHullImpl::operator new(sizeof(hkgpConvexHullImpl));
    return p ? fn_82D16868((hkgpConvexHullImpl *)p) : 0;
}

class hkgpConvexHull : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    HK_FORCE_INLINE hkgpConvexHull() : m_data(newImpl()), m_unknownC(0), m_userObject(HK_NULL) {}

    hkgpConvexHullImpl *m_data;
    int m_unknownC;
    hkReferencedObject *m_userObject;
};

extern "C" hkgpConvexHull *fn_82D0D6E8(hkgpConvexHull *self)
{
    self->hkgpConvexHull::hkgpConvexHull();
    return self;
}
