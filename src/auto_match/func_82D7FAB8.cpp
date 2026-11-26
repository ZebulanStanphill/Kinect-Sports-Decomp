// hkpRigidBody's scalar deleting destructor (slot 0 of ??_7hkpRigidBody@@6B@), written with a stand-in class named hkMemoryStreamReader (only its class allocator is used). It calls hkpRigidBody's destructor fn_82D8B3D0, which keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkMemoryStreamReader.h"

extern "C" {
void fn_82D8B3D0(hkMemoryStreamReader *self);   // hkpRigidBody::~hkpRigidBody
}

extern "C" hkMemoryStreamReader *fn_82D7FAB8(hkMemoryStreamReader *self, unsigned int flags)
{
    fn_82D8B3D0(self);
    if (flags & 1)
        hkMemoryStreamReader::operator delete(self);
    return self;
}
