// Scalar deleting destructor of a game action derived from hkpUnaryAction that has no destructor of its own:
// it runs hkpUnaryAction's and frees through the class allocator.
#include "havok/hkpAction.h"

extern "C" hkpUnaryAction *fn_8260B058(hkpUnaryAction *self, unsigned int flags)
{
    self->hkpUnaryAction::~hkpUnaryAction();
    if (flags & 1)
        hkpUnaryAction::operator delete(self);
    return self;
}
