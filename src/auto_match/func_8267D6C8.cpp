// Destructor of the unnamed class constructed by func_8267D670: the owned object
// is destroyed inline (fn_8267CCD0, then freed with fn_8267BE38), then the
// Node_8267D248 at +4, then the base part (fn_827B0A40).
#include "game/Node_8267D248.h"

extern "C" {
void fn_8267CCD0(void *p);
void fn_827B0A40(void *p);
}

struct Class_8267D670 {
    unsigned int unk00;
    Node_8267D248 node;
    void *owned; // Owned_8267D2B0 (destroyed inline here)
    unsigned int unk1C;
};

extern "C" void fn_8267D6C8(Class_8267D670 *p)
{
    void *o = p->owned;
    if (o != 0) {
        fn_8267CCD0(o);
        fn_8267BE38(o);
    }
    p->node.Node_8267D248::~Node_8267D248();
    fn_827B0A40(p);
}
