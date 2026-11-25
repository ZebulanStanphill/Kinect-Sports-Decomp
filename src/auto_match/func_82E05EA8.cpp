// hkxMesh scalar deleting destructor: calls the out-of-line ~hkxMesh
// (fn_82E05D78, ??1hkxMesh@@UAA@XZ), then the class allocator's delete. The
// function at the end only makes the compiler emit the vtable.
#include "havok/hkSceneData.h"

void emitVtable_82E05EA8(void *p, hkFinishLoadedObjectFlag f) { new (p) hkxMesh(f); }
