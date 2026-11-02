// Constructor of an unnamed GRefCountImplCore-derived class (vtable lbl_8200C690,
// callers func_826DB810 and func_826DE8E0): refcount 1, a Node_8267D248 at +8 and
// an Owned_8267D2B0 at +0x1C. The vtable is a split data label, stored by hand.
// It stays fn_826D8C80; the deleting destructor is func_826D8CE0.
#include "game/Node_8267D248.h"

extern "C" void *lbl_8200C690[];

struct Class_826D8C80 {
    void **vptr;
    unsigned int refcount;
    Node_8267D248 node;
    Owned_8267D2B0 owned;
    unsigned char unk20;
};

extern "C" Class_826D8C80 *fn_826D8C80(Class_826D8C80 *p)
{
    p->refcount = 1;
    p->vptr = lbl_8200C690;
    p->node.Node_8267D248::Node_8267D248(true, 0);
    p->owned.Owned_8267D2B0::Owned_8267D2B0();
    p->unk20 = 0;
    return p;
}
