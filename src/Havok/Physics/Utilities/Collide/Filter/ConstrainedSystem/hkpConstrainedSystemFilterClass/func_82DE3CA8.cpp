#include "havok/hkpCollisionFilter.h"
class hkpConstraintListener { public: virtual ~hkpConstraintListener() {} };
class hkpConstrainedSystemFilter : public hkpCollisionFilter, public hkpConstraintListener {
public:
 HK_DECLARE_CLASS_ALLOCATOR(0);
 hkpConstrainedSystemFilter(hkFinishLoadedObjectFlag f) : hkpCollisionFilter(f) {}
};
const void *getVtablehkpConstrainedSystemFilter() {
 union { void *ptr; char buf[sizeof(hkpConstrainedSystemFilter)]; } u;
 hkFinishLoadedObjectFlag f;
 new (u.buf) hkpConstrainedSystemFilter(f);
 return u.ptr;
}
