// Adjustor thunk in hkpRemoveTerminalsMoppModifier's vtable for its hkpMoppModifier subobject (+0x8): subtract
// the offset and tail-call the scalar deleting destructor ??_GhkpRemoveTerminalsMoppModifier@@UAAPAXI@Z (0x82D4D6F0).
// A qualified call of MSVC's member name for the scalar deleting destructor, __delDtor,
// references ??_G directly; the adjustment is plain arithmetic (a static_cast adds a null check).
// The classes and their bases are those of the game's RTTI (??_R2 base class arrays), at their
// RTTI offsets; padding stands for members this unit does not use. The thunk keeps its fn_ name.
#include "havok/hkReferencedObject.h"
class hkpMoppModifier {
public:
    virtual ~hkpMoppModifier();
};
class hkpRemoveTerminalsMoppModifier : public hkReferencedObject, public hkpMoppModifier {
public:

};

extern "C" void *fn_82D4D6E8(hkpMoppModifier *self, unsigned int flags)
{
    hkpRemoveTerminalsMoppModifier *obj = (hkpRemoveTerminalsMoppModifier *)((char *)self - 0x8);
    return obj->hkpRemoveTerminalsMoppModifier::__delDtor(flags);
}
