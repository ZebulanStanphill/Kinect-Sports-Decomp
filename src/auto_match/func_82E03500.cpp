// hkxNode's scalar deleting destructor (slot 0 of ??_7hkxNode@@6B@), written with a stand-in class named hkMemoryStreamReader (only its class allocator is used). It calls hkxNode's destructor fn_82E062C8, which keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkMemoryStreamReader.h"

extern "C" {
void fn_82E062C8(hkMemoryStreamReader *self);   // hkxNode::~hkxNode
}

extern "C" hkMemoryStreamReader *fn_82E03500(hkMemoryStreamReader *self, unsigned int flags)
{
    fn_82E062C8(self);
    if (flags & 1)
        hkMemoryStreamReader::operator delete(self);
    return self;
}
