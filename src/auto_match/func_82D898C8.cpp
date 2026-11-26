// hkpWorld's scalar deleting destructor (slot 0 of ??_7hkpWorld@@6B@), written with a stand-in class named hkMemoryStreamReader (only its class allocator is used). It calls hkpWorld's destructor fn_82D846E0, which keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkMemoryStreamReader.h"

extern "C" {
void fn_82D846E0(hkMemoryStreamReader *self);   // hkpWorld::~hkpWorld
}

extern "C" hkMemoryStreamReader *fn_82D898C8(hkMemoryStreamReader *self, unsigned int flags)
{
    fn_82D846E0(self);
    if (flags & 1)
        hkMemoryStreamReader::operator delete(self);
    return self;
}
