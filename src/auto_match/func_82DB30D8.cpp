// hkpAabbTreeWorldManager scalar deleting destructor (primary vtable slot 0): the out-of-line destructor
// ??1hkpAabbTreeWorldManager@@UAA@XZ, then the class allocator's delete when flags & 1. It keeps its fn_ name
// (written out by hand, as for func_82D3A580).
// RTTI: hkpAabbTreeWorldManager : hkpTreeWorldManager : hkReferencedObject + listeners at +0x14..+0x20; only the primary base matters here.
#include "havok/hkBase.h"

class hkpAabbTreeWorldManager : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    virtual ~hkpAabbTreeWorldManager();
};

extern "C" hkpAabbTreeWorldManager *fn_82DB30D8(hkpAabbTreeWorldManager *self, unsigned int flags)
{
    self->hkpAabbTreeWorldManager::~hkpAabbTreeWorldManager();
    if (flags & 1)
        hkpAabbTreeWorldManager::operator delete(self);
    return self;
}
