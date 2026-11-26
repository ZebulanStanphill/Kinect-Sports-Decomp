// hkpEntity's scalar deleting destructor (slot 0 of ??_7hkpEntity@@6B@), written with a stand-in class named hkMemoryStreamReader (only its class allocator is used). It calls hkpEntity's destructor fn_82D8AD50, which keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkMemoryStreamReader.h"

extern "C" {
void fn_82D8AD50(hkMemoryStreamReader *self);   // hkpEntity::~hkpEntity
}

extern "C" hkMemoryStreamReader *fn_82D8B100(hkMemoryStreamReader *self, unsigned int flags)
{
    fn_82D8AD50(self);
    if (flags & 1)
        hkMemoryStreamReader::operator delete(self);
    return self;
}
