#include "havok/hkpCollisionFilter.h"
class hkpGroupCollisionFilter : public hkpCollisionFilter {
public:
 HK_DECLARE_CLASS_ALLOCATOR(0);
 hkpGroupCollisionFilter(hkFinishLoadedObjectFlag f) : hkpCollisionFilter(f) {}
};
const void *getVtablehkpGroupCollisionFilter() {
 union { void *ptr; char buf[sizeof(hkpGroupCollisionFilter)]; } u;
 hkFinishLoadedObjectFlag f;
 new (u.buf) hkpGroupCollisionFilter(f);
 return u.ptr;
}
