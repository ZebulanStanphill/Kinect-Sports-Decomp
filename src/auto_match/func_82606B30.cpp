// Scalar deleting destructor of a game action derived from hkpUnaryAction (vtable lbl_821CA8E4): its own
// destructor only stores the vtable, then hkpUnaryAction's runs and the class allocator frees the object.
#include "havok/hkpAction.h"

extern "C" char lbl_821CA8E4[];

extern "C" hkpUnaryAction *fn_82606B30(hkpUnaryAction *self, unsigned int flags)
{
    *(void **)self = lbl_821CA8E4;
    self->hkpUnaryAction::~hkpUnaryAction();
    if (flags & 1)
        hkpUnaryAction::operator delete(self);
    return self;
}
