// hkxSparselyAnimatedInt's scalar deleting destructor (slot 0 of ??_7hkxSparselyAnimatedInt@@6B@), written with a stand-in class named hkMemoryStreamReader (only its class allocator is used). It calls hkxSparselyAnimatedInt's destructor fn_82E025E0, which keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkMemoryStreamReader.h"

extern "C" {
void fn_82E025E0(hkMemoryStreamReader *self);   // hkxSparselyAnimatedInt::~hkxSparselyAnimatedInt
}

extern "C" hkMemoryStreamReader *fn_82E02698(hkMemoryStreamReader *self, unsigned int flags)
{
    fn_82E025E0(self);
    if (flags & 1)
        hkMemoryStreamReader::operator delete(self);
    return self;
}
