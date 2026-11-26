// hkpSerializedDisplayRbTransforms scalar deleting destructor (compiler-generated); it calls the destructor out of
// line (??1, fn_82DF51A8). The finish constructor at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkpSerializedDisplayRbTransforms.h"

void emitVtable_82DE4FE0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpSerializedDisplayRbTransforms(f); }
