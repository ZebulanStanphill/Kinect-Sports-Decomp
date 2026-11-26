// hkpConvexPieceStreamData::~hkpConvexPieceStreamData, the implicit destructor, out of line: the three arrays
// in reverse order, then hkReferencedObject's. It keeps its fn_ name (the deleting destructor 82DCA120 calls
// it), so the member destructors are called explicitly.
#include "havok/hkpConvexPieceStreamData.h"

extern "C" void fn_82DCA028(hkpConvexPieceStreamData *self)
{
    self->m_convexPieceSingleTriangles.~hkArray();
    self->m_convexPieceOffsets.~hkArray();
    self->m_convexPieceStream.~hkArray();
    self->hkReferencedObject::~hkReferencedObject();
}
