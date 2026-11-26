// hkxNodeSelectionSet's scalar deleting destructor (slot 0 of ??_7hkxNodeSelectionSet@@6B@), written with a stand-in class named hkMemoryStreamReader (only its class allocator is used). It calls hkxNodeSelectionSet's destructor fn_82E035F0, which keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkMemoryStreamReader.h"

extern "C" {
void fn_82E035F0(hkMemoryStreamReader *self);   // hkxNodeSelectionSet::~hkxNodeSelectionSet
}

extern "C" hkMemoryStreamReader *fn_82E03698(hkMemoryStreamReader *self, unsigned int flags)
{
    fn_82E035F0(self);
    if (flags & 1)
        hkMemoryStreamReader::operator delete(self);
    return self;
}
