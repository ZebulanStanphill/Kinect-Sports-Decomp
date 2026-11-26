// hkpConvexPieceMeshShape scalar deleting destructor: it calls the out-of-line destructor
// (??1hkpConvexPieceMeshShape, matched in func_82D49610.cpp). The copy below only makes the compiler emit the
// vtable and this deleting destructor (the header declares no inline constructor).
#include "havok/hkpConvexPieceMeshShape.h"

void emitVtable_82D39C68(void *p, const void *q)
{
    new (p) hkpConvexPieceMeshShape(*(const hkpConvexPieceMeshShape *)q);
}
