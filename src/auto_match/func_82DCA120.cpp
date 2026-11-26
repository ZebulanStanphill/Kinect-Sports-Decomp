// hkpConvexPieceStreamData's scalar deleting destructor (slot 0 of ??_7hkpConvexPieceStreamData@@6B@), written with a stand-in class named hkMemoryStreamReader (only its class allocator is used). It calls hkpConvexPieceStreamData's destructor fn_82DCA028, which keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkMemoryStreamReader.h"

extern "C" {
void fn_82DCA028(hkMemoryStreamReader *self);   // hkpConvexPieceStreamData::~hkpConvexPieceStreamData
}

extern "C" hkMemoryStreamReader *fn_82DCA120(hkMemoryStreamReader *self, unsigned int flags)
{
    fn_82DCA028(self);
    if (flags & 1)
        hkMemoryStreamReader::operator delete(self);
    return self;
}
