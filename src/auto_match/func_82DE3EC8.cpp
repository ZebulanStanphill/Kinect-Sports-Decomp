#include "havok/hkpCollisionFilter.h"
class hkpEntityListener { public: virtual ~hkpEntityListener() {} };
class hkpDisableEntityCollisionFilter : public hkpCollisionFilter, public hkpEntityListener {
public:
 HK_DECLARE_CLASS_ALLOCATOR(0);
 hkpDisableEntityCollisionFilter(hkFinishLoadedObjectFlag f) : hkpCollisionFilter(f) {}
};
const void *getVtablehkpDisableEntityCollisionFilter() {
 union { void *ptr; char buf[sizeof(hkpDisableEntityCollisionFilter)]; } u;
 hkFinishLoadedObjectFlag f;
 new (u.buf) hkpDisableEntityCollisionFilter(f);
 return u.ptr;
}
