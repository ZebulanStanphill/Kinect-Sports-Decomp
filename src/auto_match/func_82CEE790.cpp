// hkOstream's scalar deleting destructor (vtable slot 0). Slot 0 of hkErrStream's vtable points here too:
// hkErrStream's deleting destructor has the same code and was folded with this one, so the function keeps
// its fn_ name.
#include "havok/hkOstream.h"

extern "C" hkOstream *fn_82CEE790(hkOstream *self, unsigned int flags)
{
    self->hkOstream::~hkOstream();
    if (flags & 1)
        hkOstream::operator delete(self);
    return self;
}
