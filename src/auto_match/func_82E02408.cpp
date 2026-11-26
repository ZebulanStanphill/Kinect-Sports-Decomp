// hkxAttributeHolder's scalar deleting destructor (slot 0 of ??_7hkxAttributeHolder@@6B@), written with a stand-in class named hkMemoryStreamReader (only its class allocator is used). It calls hkxAttributeHolder's destructor fn_82E04A30, which keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkMemoryStreamReader.h"

extern "C" {
void fn_82E04A30(hkMemoryStreamReader *self);   // hkxAttributeHolder::~hkxAttributeHolder
}

extern "C" hkMemoryStreamReader *fn_82E02408(hkMemoryStreamReader *self, unsigned int flags)
{
    fn_82E04A30(self);
    if (flags & 1)
        hkMemoryStreamReader::operator delete(self);
    return self;
}
