// hkpConvexPieceStreamData's scalar deleting destructor (slot 0 of ??_7hkpConvexPieceStreamData@@6B@). It calls
// hkpConvexPieceStreamData's destructor fn_82DCA028, which keeps its fn_ name.
#include "havok/hkpConvexPieceStreamData.h"

extern "C" {
void fn_82DCA028(hkpConvexPieceStreamData *self);   // hkpConvexPieceStreamData::~hkpConvexPieceStreamData
}

extern "C" hkpConvexPieceStreamData *fn_82DCA120(hkpConvexPieceStreamData *self, unsigned int flags)
{
    fn_82DCA028(self);
    if (flags & 1)
        hkpConvexPieceStreamData::operator delete(self);
    return self;
}
