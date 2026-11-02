// Constructor of an unnamed class (caller func_8267DDF8): a null first field, a
// Node_8267D248 at +4, an Owned_8267D2B0 at +0x18 and a handle from fn_82A1BB18.
// It stays fn_8267D670 (no RTTI name); its destructor is func_8267D6C8.
#include "game/Node_8267D248.h"

extern "C" unsigned int fn_82A1BB18();

struct Class_8267D670 {
    unsigned int unk00;
    Node_8267D248 node;
    Owned_8267D2B0 owned;
    unsigned int unk1C;
};

extern "C" Class_8267D670 *fn_8267D670(Class_8267D670 *p)
{
    p->unk00 = 0;
    p->node.Node_8267D248::Node_8267D248(true, 0);
    p->owned.Owned_8267D2B0::Owned_8267D2B0();
    p->unk1C = fn_82A1BB18();
    return p;
}
