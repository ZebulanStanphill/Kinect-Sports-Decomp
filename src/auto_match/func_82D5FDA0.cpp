// hkpListAgent's scalar deleting destructor (Physics/Collide/Agent/CompoundAgent/List/hkpListAgent.h; folded with
// hkpSymmetricAgent<hkpListAgent>'s): the implicit destructor inlined (m_agentTrack's sector array, whose
// destructor is out of line as fn_82CE4C80, then hkBaseObject's vtable), then the class allocator's delete.
#include "havok/hkpListAgent.h"

// The header's constructor is out of line, so the implicit copy constructor makes the compiler emit the vtable
// (and with it the deleting destructor).
void emitVtable_82D5FDA0(void *p, const void *q) { new (p) hkpListAgent(*(const hkpListAgent *)q); }
