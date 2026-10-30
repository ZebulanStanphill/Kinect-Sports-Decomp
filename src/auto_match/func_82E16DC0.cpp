// hkPackfileData scalar deleting destructor (primary vtable slot 0): the out-of-line destructor
// ??1hkPackfileData@@UAA@XZ, then the class allocator's delete when flags & 1. It keeps its fn_ name
// (written out by hand, as for func_82D3A580).
// RTTI: hkPackfileData : hkResource : hkReferencedObject; only the primary base matters here.
#include "havok/hkBase.h"

class hkPackfileData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    virtual ~hkPackfileData();
};

extern "C" hkPackfileData *fn_82E16DC0(hkPackfileData *self, unsigned int flags)
{
    self->hkPackfileData::~hkPackfileData();
    if (flags & 1)
        hkPackfileData::operator delete(self);
    return self;
}
