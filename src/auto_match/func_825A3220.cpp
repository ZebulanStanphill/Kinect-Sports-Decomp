// hkReferencedObject's scalar deleting destructor,
// ??_GhkReferencedObject@@UAAPAXI@Z. The compiler generates it wherever it
// emits hkReferencedObject's vtable; the constructor call below only makes it
// emit the vtable here.
#include "havok/hkReferencedObject.h"

void emitVtable_825A3220(void *p) { new (p) hkReferencedObject; }
