// hkpRayHitCollector scalar deleting destructor ??_GhkpRayHitCollector@@UAAPAXI@Z
// (vtable slot 1, after the pure addRayHit), emitted in a game object (/O1).
// hkpRayHitCollector is an interface with no base class (RTTI), so it frees
// through the global operator delete, fn_8265CA20. The function at the end only
// makes the compiler emit the vtable, and with it this function.
#include "havok/hkBase.h"
#include "havok/hkpRayHitCollector.h"

void emitVtable_825CD138(hkpRayHitCollector *p) { p->hkpRayHitCollector::~hkpRayHitCollector(); }
