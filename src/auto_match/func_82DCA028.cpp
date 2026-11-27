// hkpConvexPieceStreamData::~hkpConvexPieceStreamData, the implicit destructor, out of line: the three arrays
// in reverse order, then hkReferencedObject's. The function at the end only makes the compiler emit the
// vtable, which pulls in the deleting destructor and this destructor.
#include "havok/hkpConvexPieceStreamData.h"

void emitVtable_82DCA028(void *p, const hkpConvexPieceStreamData &o) { new (p) hkpConvexPieceStreamData(o); }
