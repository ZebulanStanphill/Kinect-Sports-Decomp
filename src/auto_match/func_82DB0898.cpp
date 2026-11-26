// hkpEntityListener scalar deleting destructor. hkpEntityListener is an interface with no base
// class (RTTI), so it frees through the global operator delete, fn_8265CA20.
// The function at the end only makes the compiler emit the vtable, and
// with it this function.
#include "havok/hkBase.h"
#include "havok/hkpEntityListener.h"

void emitVtable_82DB0898(hkpEntityListener *p) { p->hkpEntityListener::~hkpEntityListener(); }
