// hkgpConvexHull::~hkgpConvexHull (Common/Internal/GeometryProcessing/
// ConvexHull/hkgpConvexHull.cpp): deletes the implementation (non-virtual,
// 0x1C0 bytes, out-of-line destructor fn_82D16300) and the user object.
// It keeps its fn_ name because a Matching C unit (fn_82D08138) calls it: the
// destructor is defined inline and expanded into an extern "C" definition.
#include "havok/hkBase.h"

extern "C" void fn_82D16300(void *self);   // hkgpConvexHullImpl::~hkgpConvexHullImpl

class hkgpConvexHullImpl {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES, hkgpConvexHullImpl);
    HK_FORCE_INLINE ~hkgpConvexHullImpl() { fn_82D16300(this); }
    hkUint8 m_members[0x1C0];   // not needed here
};

class hkgpConvexHull : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    virtual HK_FORCE_INLINE ~hkgpConvexHull()
    {
        delete m_data;
        delete m_userObject;
        m_userObject = HK_NULL;
    }

    hkgpConvexHullImpl *m_data;          // +0x8
    int m_unknownC;                      // +0xC
    hkReferencedObject *m_userObject;    // +0x10
};

extern "C" void fn_82D0D640(hkgpConvexHull *self)
{
    self->hkgpConvexHull::~hkgpConvexHull();
}
