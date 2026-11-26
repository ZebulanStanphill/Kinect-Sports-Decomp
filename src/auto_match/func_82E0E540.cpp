// hkBinaryPackfileReader's scalar deleting destructor (slot 0 of ??_7hkBinaryPackfileReader@@6B@), written with a stand-in class named hkMemoryStreamReader (only its class allocator is used). It calls hkBinaryPackfileReader's destructor fn_82E0C7A0, which keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkMemoryStreamReader.h"

extern "C" {
void fn_82E0C7A0(hkMemoryStreamReader *self);   // hkBinaryPackfileReader::~hkBinaryPackfileReader
}

extern "C" hkMemoryStreamReader *fn_82E0E540(hkMemoryStreamReader *self, unsigned int flags)
{
    fn_82E0C7A0(self);
    if (flags & 1)
        hkMemoryStreamReader::operator delete(self);
    return self;
}
