// hkgpConvexHull's scalar deleting destructor (slot 0 of ??_7hkgpConvexHull@@6B@), written with a stand-in class named hkMemoryStreamReader (only its class allocator is used). It calls hkgpConvexHull's destructor fn_82D0D640, which keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkMemoryStreamReader.h"

extern "C" {
void fn_82D0D640(hkMemoryStreamReader *self);   // hkgpConvexHull::~hkgpConvexHull
}

extern "C" hkMemoryStreamReader *fn_82D16800(hkMemoryStreamReader *self, unsigned int flags)
{
    fn_82D0D640(self);
    if (flags & 1)
        hkMemoryStreamReader::operator delete(self);
    return self;
}
