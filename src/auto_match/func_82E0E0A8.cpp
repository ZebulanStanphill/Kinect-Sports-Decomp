// The scalar deleting destructor of hkArray<hkVariant> (non-virtual: hkArray's class allocator frees 0xC
// bytes). The compiler emits it where an hkArray<hkVariant> is deleted: the game's only call is in
// hkBinaryPackfileReader's destructor (82E0C7A0), `delete m_loadedObjects`. The function at the end only makes
// the compiler emit it.
#include "havok/hkBase.h"
#include "havok/hkVariant.h"

void emitDelete_82E0E0A8(hkArray<hkVariant> *a) { delete a; }
