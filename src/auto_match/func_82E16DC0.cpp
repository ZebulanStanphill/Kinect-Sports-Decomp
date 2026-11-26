// hkPackfileData scalar deleting destructor (primary vtable slot 0): the out-of-line destructor
// ??1hkPackfileData@@UAA@XZ, then the class allocator's delete when flags & 1. It keeps its fn_ name
// (written out by hand, as for func_82D3A580).
#include "havok/hkPackfileData.h"

extern "C" hkPackfileData *fn_82E16DC0(hkPackfileData *self, unsigned int flags)
{
    self->hkPackfileData::~hkPackfileData();
    if (flags & 1)
        hkPackfileData::operator delete(self);
    return self;
}
