// hkpConvexPieceStreamData's scalar deleting destructor (slot 0 of ??_7hkpConvexPieceStreamData@@6B@): the
// implicit destructor (out of line), then the class allocator. The function at the end only makes the
// compiler emit the vtable.
#include "havok/hkpConvexPieceStreamData.h"

void emitVtable_82DCA120(void *p, const hkpConvexPieceStreamData &o) { new (p) hkpConvexPieceStreamData(o); }
