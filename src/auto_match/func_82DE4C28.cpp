// Scalar deleting destructor in slot 0 of ??_7hkpMotorAction@@6B@ and ??_7hkpReorientAction@@6B@ (one
// function for both, so it keeps its fn_ name): neither class has a destructor of its own, so it runs
// hkpUnaryAction's and frees through the class allocator.
#include "havok/hkpAction.h"

extern "C" hkpUnaryAction *fn_82DE4C28(hkpUnaryAction *self, unsigned int flags)
{
    self->hkpUnaryAction::~hkpUnaryAction();
    if (flags & 1)
        hkpUnaryAction::operator delete(self);
    return self;
}
