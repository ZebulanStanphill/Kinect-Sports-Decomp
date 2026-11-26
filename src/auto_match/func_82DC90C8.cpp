// hkpEndOfStepCallbackUtil's scalar deleting destructor (slot 0 of ??_7hkpEndOfStepCallbackUtil@@6BhkReferencedObject@@@), written with a stand-in class named hkMemoryStreamReader (only its class allocator is used). It calls hkpEndOfStepCallbackUtil's destructor fn_82DB4350, which keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkMemoryStreamReader.h"

extern "C" {
void fn_82DB4350(hkMemoryStreamReader *self);   // hkpEndOfStepCallbackUtil::~hkpEndOfStepCallbackUtil
}

extern "C" hkMemoryStreamReader *fn_82DC90C8(hkMemoryStreamReader *self, unsigned int flags)
{
    fn_82DB4350(self);
    if (flags & 1)
        hkMemoryStreamReader::operator delete(self);
    return self;
}
