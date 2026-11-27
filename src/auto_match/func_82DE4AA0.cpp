// hkpPoweredChainMapper's scalar deleting destructor (slot 0 of ??_7hkpPoweredChainMapper@@6B@ only): it calls ~hkpPoweredChainMapper (out of line) and frees
// through the class allocator. The function at the end only makes the compiler emit the vtable (and with it the
// deleting destructor); it uses the implicit copy constructor.
#include "havok/hkBase.h"
#include "havok/hkpPoweredChainMapper.h"

void emitVtable_82DE4AA0(void *p, const hkpPoweredChainMapper &o) { new (p) hkpPoweredChainMapper(o); }
