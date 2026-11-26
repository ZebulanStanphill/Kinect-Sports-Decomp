// hkLocalFrameGroup's scalar deleting destructor (slot 0 of ??_7hkLocalFrameGroup@@6B@): its only member is a
// hkStringPtr at +0x8 (its destructor is fn_82CED5B8).
#include "havok/hkLocalFrameGroup.h"

extern "C" hkLocalFrameGroup *fn_82CE46A0(hkLocalFrameGroup *self, unsigned int flags)
{
    self->hkLocalFrameGroup::~hkLocalFrameGroup();
    if (flags & 1)
        hkLocalFrameGroup::operator delete(self);
    return self;
}
