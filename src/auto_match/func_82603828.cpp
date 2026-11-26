// Scalar deleting destructor of a game action derived from hkpUnaryAction (vtable lbl_821CA858): its own
// destructor detaches and releases the object at +0x140, then hkpUnaryAction's runs and the class allocator
// frees the object.
#include "havok/hkpAction.h"

struct Sub_82603828 : hkReferencedObject {
    int f8;
};
struct Obj_82603828 : hkpUnaryAction {
    char pad[0x140 - sizeof(hkpUnaryAction)];
    Sub_82603828 *f140;
};
extern "C" {
extern char lbl_821CA858[];
void fn_82D82E28(int, Sub_82603828 *);
}

extern "C" Obj_82603828 *fn_82603828(Obj_82603828 *self, unsigned int flags)
{
    Sub_82603828 *s;
    *(void **)self = lbl_821CA858;
    s = self->f140;
    if (s != 0) {
        if (s->f8 != 0) {
            fn_82D82E28(s->f8, s);
        }
        self->f140->removeReference();
    }
    self->f140 = 0;
    self->hkpUnaryAction::~hkpUnaryAction();
    if ((flags & 1) != 0) {
        hkpUnaryAction::operator delete(self);
    }
    return self;
}
