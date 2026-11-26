// hkxMaterial's scalar deleting destructor (slot 0 of ??_7hkxMaterial@@6B@), written with a stand-in class named hkMemoryStreamReader (only its class allocator is used). It calls hkxMaterial's destructor fn_82E057A8, which keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkMemoryStreamReader.h"

extern "C" {
void fn_82E057A8(hkMemoryStreamReader *self);   // hkxMaterial::~hkxMaterial
}

extern "C" hkMemoryStreamReader *fn_82E02C30(hkMemoryStreamReader *self, unsigned int flags)
{
    fn_82E057A8(self);
    if (flags & 1)
        hkMemoryStreamReader::operator delete(self);
    return self;
}
