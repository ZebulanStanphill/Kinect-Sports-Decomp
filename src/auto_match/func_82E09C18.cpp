// hkObjectInspector::ObjectListener scalar deleting destructor. hkObjectInspector::ObjectListener is an interface with no base
// class (RTTI), so it frees through the global operator delete, fn_8265CA20.
// The function at the end only makes the compiler emit the vtable, and
// with it this function.
#include "havok/hkObjectInspector.h"

void emitVtable_82E09C18(hkObjectInspector::ObjectListener *p) { p->hkObjectInspector::ObjectListener::~ObjectListener(); }
