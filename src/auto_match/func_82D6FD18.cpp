// Adjustor thunk in hkpConvexPieceShape's hkpShapeContainer vtable (subobject at +0x14): adjusts this and tail-calls
// the scalar deleting destructor with the same flags. The compiler emits it with the vtable as
// ??_EhkpConvexPieceShape@@WBE@AAPAXI@Z, branching to the weak alias ??_EhkpConvexPieceShape@@UAAPAXI@Z, while
// symbols.txt names that address after the scalar deleting destructor (??_G..., func_82D6FD20.cpp). A qualified call
// of MSVC's scalar deleting destructor member __delDtor references ??_G directly; at the unit's /O1 it stays a tail
// call (/O2 inlines the 0x70-byte ??_G).
#include "havok/hkpConvexPieceShape.h"

extern "C" void *fn_82D6FD18(char *self, unsigned int flags)
{
    return ((hkpConvexPieceShape *)(self - 0x14))->hkpConvexPieceShape::__delDtor(flags);
}
