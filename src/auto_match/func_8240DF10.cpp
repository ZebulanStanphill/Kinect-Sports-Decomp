// hkpContactListener scalar deleting destructor ??_GhkpContactListener@@UAAPAXI@Z
// (vtable slot 3; identical code also serves hkpCollisionListener), emitted in
// a game object (/O1). hkpContactListener is an interface with no base class
// (RTTI), so it frees through the global operator delete, fn_8265CA20; its
// other virtual functions are empty. The function at the end only makes the
// compiler emit the vtable, and with it this function.
#include "havok/hkBase.h"
#include "havok/hkpContactListener.h"

void emitVtable_8240DF10(hkpContactListener *p) { p->hkpContactListener::~hkpContactListener(); }
