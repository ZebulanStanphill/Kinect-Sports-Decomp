#include "game/Grow_827BA438.h"

struct Elem_827BA7C0 {
    unsigned short a;
    unsigned short b;
};

extern "C" void fn_827BA7C0(V_827BA438 *a, Elem_827BA7C0 *v)
{
    unsigned int idx = a->size >> 6;
    if (idx >= a->nblocks) {
        a->Grow(idx);
    }
    ((Elem_827BA7C0 **)a->blocks)[idx][a->size & 0x3f] = *v;
    a->size++;
}
