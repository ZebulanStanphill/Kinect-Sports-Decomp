// Scalar deleting destructor in slot 0 of ??_7hkpMotorAction@@6B@ and ??_7hkpReorientAction@@6B@ (one function for both), written with a stand-in class named hkMemoryStreamReader (only its class allocator is used). It calls the destructor fn_82D95638, which keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkMemoryStreamReader.h"

extern "C" {
void fn_82D95638(hkMemoryStreamReader *self);   // destructor (hkpMotorAction / hkpReorientAction)
}

extern "C" hkMemoryStreamReader *fn_82DE4C28(hkMemoryStreamReader *self, unsigned int flags)
{
    fn_82D95638(self);
    if (flags & 1)
        hkMemoryStreamReader::operator delete(self);
    return self;
}
