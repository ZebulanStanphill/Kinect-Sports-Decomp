// hkpPhysicsSystemWithContacts's scalar deleting destructor (slot 0 of ??_7hkpPhysicsSystemWithContacts@@6B@), written with a stand-in class named hkMemoryStreamReader (only its class allocator is used). It calls hkpPhysicsSystemWithContacts's destructor fn_82DF3D70, which keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkMemoryStreamReader.h"

extern "C" {
void fn_82DF3D70(hkMemoryStreamReader *self);   // hkpPhysicsSystemWithContacts::~hkpPhysicsSystemWithContacts
}

extern "C" hkMemoryStreamReader *fn_82DE49B8(hkMemoryStreamReader *self, unsigned int flags)
{
    fn_82DF3D70(self);
    if (flags & 1)
        hkMemoryStreamReader::operator delete(self);
    return self;
}
