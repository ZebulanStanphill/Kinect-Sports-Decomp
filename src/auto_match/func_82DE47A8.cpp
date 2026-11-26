// Scalar deleting destructor of an action derived from hkpUnaryAction with an array of pointers at +0x54
// (slot 0 of one vtable; it keeps its fn_ name): the array is freed, then hkpUnaryAction's destructor runs
// and the class allocator frees the object.
#include "havok/hkpAction.h"

struct Obj_82DE47A8 : hkpUnaryAction {
    char pad[84 - sizeof(hkpUnaryAction)];
    hkArray<void *> buf;   // +0x54
};

extern "C" Obj_82DE47A8 *fn_82DE47A8(Obj_82DE47A8 *o, unsigned flags)
{
    o->buf.~hkArray();
    o->hkpUnaryAction::~hkpUnaryAction();
    if ((flags & 1) != 0) {
        hkpUnaryAction::operator delete(o);
    }
    return o;
}
