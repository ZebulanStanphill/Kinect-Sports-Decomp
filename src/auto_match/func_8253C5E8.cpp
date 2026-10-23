// hkBaseObject's scalar deleting destructor, ??_GhkBaseObject@@UAAPAXI@Z.
// The compiler generates it wherever it emits hkBaseObject's vtable; the
// function below only makes it emit the vtable here.
#include "havok/hkBaseObject.h"

void emitVtable_8253C5E8(hkBaseObject *p) { p->hkBaseObject::~hkBaseObject(); }
