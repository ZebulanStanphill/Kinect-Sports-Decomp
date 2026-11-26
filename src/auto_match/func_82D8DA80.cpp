// hkpWorldPostSimulationListener scalar deleting destructor. hkpWorldPostSimulationListener is an interface with no base
// class (RTTI), so it frees through the global operator delete, fn_8265CA20.
// The function at the end only makes the compiler emit the vtable, and
// with it this function.
#include "havok/hkBase.h"
#include "havok/hkpWorldPostSimulationListener.h"

void emitVtable_82D8DA80(hkpWorldPostSimulationListener *p) { p->hkpWorldPostSimulationListener::~hkpWorldPostSimulationListener(); }
