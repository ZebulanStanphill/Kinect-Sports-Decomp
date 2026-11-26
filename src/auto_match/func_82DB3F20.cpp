// hkpKdTreeWorldManager's scalar deleting destructor (slot 0 of ??_7hkpKdTreeWorldManager@@6BhkpTreeWorldManager@@@), written with a stand-in class named hkMemoryStreamReader (only its class allocator is used). It calls hkpKdTreeWorldManager's destructor fn_82DB3418, which keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkMemoryStreamReader.h"

extern "C" {
void fn_82DB3418(hkMemoryStreamReader *self);   // hkpKdTreeWorldManager::~hkpKdTreeWorldManager
}

extern "C" hkMemoryStreamReader *fn_82DB3F20(hkMemoryStreamReader *self, unsigned int flags)
{
    fn_82DB3418(self);
    if (flags & 1)
        hkMemoryStreamReader::operator delete(self);
    return self;
}
