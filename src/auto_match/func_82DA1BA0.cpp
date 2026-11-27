// hkpPoweredChainData's scalar deleting destructor (slot 0 of ??_7hkpPoweredChainData@@6B@ only): it calls ~hkpPoweredChainData (out of line) and frees
// through the class allocator. The function at the end only makes the compiler emit the vtable (and with it the
// deleting destructor); it uses the implicit copy constructor.
#include "havok/hkBase.h"
#include "havok/hkpPoweredChainData.h"

void emitVtable_82DA1BA0(void *p, const hkpPoweredChainData &o) { new (p) hkpPoweredChainData(o); }
