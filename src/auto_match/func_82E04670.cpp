// hkAlignSceneToNodeOptions's scalar deleting destructor: the implicit destructor inlined (m_nodeName's
// out-of-line destructor fn_82CED5B8, then hkBaseObject's vtable), then the class allocator's delete.
#include "havok/hkSceneData.h"

// Emits the vtable (and with it the deleting destructor).
void emitVtable_82E04670(void *p, hkFinishLoadedObjectFlag f) { new (p) hkAlignSceneToNodeOptions(f); }
