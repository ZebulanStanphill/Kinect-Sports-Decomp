// hkpBvTreeStreamAgent scalar deleting destructor (Physics/Collide/Agent/CompoundAgent/BvTreeStream/
// hkpBvTreeStreamAgent.h; folded with hkpSymmetricAgent<hkpBvTreeStreamAgent>'s): the inline destructor
// (vtable, then m_agentTrack's sector array, whose destructor is out of line as fn_82CE4C80, then
// hkBaseObject's vtable), then the class allocator's delete. The function at the end only makes the
// compiler emit the vtable.
#include "havok/hkpBvTreeStreamAgent.h"

// The header's constructor is out of line, so the implicit copy constructor makes the compiler emit the vtable.
void emitVtable_82D54FD8(void *p, const void *q) { new (p) hkpBvTreeStreamAgent(*(const hkpBvTreeStreamAgent *)q); }
