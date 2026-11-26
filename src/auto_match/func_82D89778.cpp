// hkpNullContactMgrFactory scalar deleting destructor (Physics/Dynamics/Collide/ContactListener/hkpNullContactMgrFactory.h),
// generated from the implicit destructor: the embedded hkpNullContactMgr (+0x8, 0xC bytes; hkpContactMgr::m_type
// = 3 at +0x10, from the factory's construction in fn_82D80DF0) leaves its hkBaseObject vtable store, then the
// factory's. The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"
#include "havok/hkpNullContactMgr.h"

void emitVtable_82D89778(void *p) { new (p) hkpNullContactMgrFactory; }
