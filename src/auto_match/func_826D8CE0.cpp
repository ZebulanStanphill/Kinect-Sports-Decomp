// Deleting destructor (slot 0 of lbl_8200C690) of the class constructed by
// func_826D8C80: the owned object, the Node_8267D248, the GRefCountImplCore
// base (fn_8267C488), then free when bit 0 of the flags is set.
#include "game/Node_8267D248.h"

extern "C" void fn_8267C488(void *p);

struct Class_826D8C80 {
    void **vptr;
    unsigned int refcount;
    Node_8267D248 node;
    Owned_8267D2B0 owned;
    unsigned char unk20;
};

extern "C" Class_826D8C80 *fn_826D8CE0(Class_826D8C80 *p, unsigned int flags)
{
    p->owned.Owned_8267D2B0::~Owned_8267D2B0();
    p->node.Node_8267D248::~Node_8267D248();
    fn_8267C488(p);
    if (flags & 1)
        fn_8267BE38(p);
    return p;
}
