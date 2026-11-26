#include "havok/hkpConstrainedSystemFilter.h"
const void *getVtablehkpConstrainedSystemFilter() {
 union { void *ptr; char buf[sizeof(hkpConstrainedSystemFilter)]; } u;
 hkFinishLoadedObjectFlag f;
 new (u.buf) hkpConstrainedSystemFilter(f);
 return u.ptr;
}
