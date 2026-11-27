// hkgpConvexHull's copy function (hkgpConvexHull.cpp): a new hull whose implementation is replaced by a copy of
// this one's (fn_82D16968), with the user data and a copy of the user object made through that object's second
// virtual function. Keeps its fn_ name: the member's name is not known.
#include "havok/hkgpConvexHullImpl.h"

extern "C" hkgpConvexHullImpl *fn_82D16968(const hkgpConvexHullImpl *impl);   // copies an implementation

// The user object as this function sees it: its slot +0x4 returns a copy.
class hkgpConvexHullUserObject_82D0D770 {
public:
    virtual ~hkgpConvexHullUserObject_82D0D770();
    virtual hkReferencedObject *clone() const;
};

extern "C" hkgpConvexHull *fn_82D0D770(const hkgpConvexHull *self)
{
    hkgpConvexHull *hull = new hkgpConvexHull;
    delete hull->m_data;
    hull->m_data = HK_NULL;
    hull->m_data = fn_82D16968(self->m_data);
    hull->m_userData = self->m_userData;
    hull->m_userObject = self->m_userObject
                             ? reinterpret_cast<const hkgpConvexHullUserObject_82D0D770 *>(self->m_userObject)->clone()
                             : HK_NULL;
    return hull;
}
