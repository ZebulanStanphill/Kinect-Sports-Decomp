#include "havok/hkpDisableEntityCollisionFilter.h"
const void *getVtablehkpDisableEntityCollisionFilter() {
 union { void *ptr; char buf[sizeof(hkpDisableEntityCollisionFilter)]; } u;
 hkFinishLoadedObjectFlag f;
 new (u.buf) hkpDisableEntityCollisionFilter(f);
 return u.ptr;
}
