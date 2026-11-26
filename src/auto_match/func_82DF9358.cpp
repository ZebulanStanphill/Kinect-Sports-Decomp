// hkpTyremarksInfo's scalar deleting destructor (Physics/Vehicle/TyreMarks/hkpTyremarksInfo.h): it calls the
// user-written destructor (??1, fn_82DFA8D0, defined in hkpTyremarksInfo.cpp) and frees through the class
// allocator. The finish constructor below only makes the compiler emit the vtable, and with it the deleting
// destructor.
#include "havok/hkpTyremarksInfo.h"

void emitVtable_82DF9358(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpTyremarksInfo(f); }
