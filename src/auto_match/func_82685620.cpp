// StateImpl_82685620 destructor: releases its members in reverse order, then
// the inline State destructor (vtable store) and the out-of-line
// GRefCountImplCore destructor (fn_8267C488).
#include "game/StateImpl_82685620.h"

StateImpl_82685620::~StateImpl_82685620()
{
    fn_8267C498(unk14);
    fn_8267C498(unk10);
    fn_8267BC98(heap);
}
