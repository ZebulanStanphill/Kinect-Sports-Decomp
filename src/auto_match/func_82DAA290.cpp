// hkpBroadPhaseListener scalar deleting destructor. hkpBroadPhaseListener is an interface with no base
// class (RTTI), so it frees through the global operator delete, fn_8265CA20.
// The function at the end only makes the compiler emit the vtable, and
// with it this function.
#include "havok/hkBase.h"
#include "havok/hkpBroadPhaseListener.h"

void emitVtable_82DAA290(hkpBroadPhaseListener *p) { p->hkpBroadPhaseListener::~hkpBroadPhaseListener(); }
