#include "havok/hkpGroupCollisionFilter.h"
const void *getVtablehkpGroupCollisionFilter() {
 union { void *ptr; char buf[sizeof(hkpGroupCollisionFilter)]; } u;
 hkFinishLoadedObjectFlag f;
 new (u.buf) hkpGroupCollisionFilter(f);
 return u.ptr;
}
