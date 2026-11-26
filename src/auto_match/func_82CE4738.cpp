// hkSimpleLocalFrame's scalar deleting destructor (slot 0 of ??_7hkSimpleLocalFrame@@6B@), written with a stand-in class named hkMemoryStreamReader (only its class allocator is used). It calls hkSimpleLocalFrame's destructor fn_82CEFFA8, which keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkMemoryStreamReader.h"

extern "C" {
void fn_82CEFFA8(hkMemoryStreamReader *self);   // hkSimpleLocalFrame::~hkSimpleLocalFrame
}

extern "C" hkMemoryStreamReader *fn_82CE4738(hkMemoryStreamReader *self, unsigned int flags)
{
    fn_82CEFFA8(self);
    if (flags & 1)
        hkMemoryStreamReader::operator delete(self);
    return self;
}
