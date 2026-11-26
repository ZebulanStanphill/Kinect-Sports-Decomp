#include "havok/hkBase.h"
#include "havok/hkpRemoveTerminalsMoppModifier.h"
const void *getVtablehkpRemoveTerminalsMoppModifier() {
 union { void *ptr; char buf[sizeof(hkpRemoveTerminalsMoppModifier)]; } u;
 hkFinishLoadedObjectFlag f;
 new (u.buf) hkpRemoveTerminalsMoppModifier(f);
 return u.ptr;
}
