// hkpBreakOffPartsUtil scalar deleting destructor. It keeps its fn_ name because the adjustor thunks for the
// listener subobjects (fn_82DEC388..fn_82DEC3A0, subi r3, r3, N; b fn_82DEC3A8) are plain C; so it is written
// out instead of being compiler-generated (??_G).
#include "havok/hkBase.h"
#include "havok/hkpBreakOffPartsUtil.h"

extern "C" hkpBreakOffPartsUtil *fn_82DEC3A8(hkpBreakOffPartsUtil *self, unsigned int flags)
{
    self->hkpBreakOffPartsUtil::~hkpBreakOffPartsUtil();
    if (flags & 1)
        hkpBreakOffPartsUtil::operator delete(self);
    return self;
}
