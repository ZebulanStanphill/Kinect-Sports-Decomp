#include "game/Grow_827B3938.h"

struct Elem_827B3D38 {
    int x;
    int y;
    int z;
    int w;
};

extern "C" void fn_827B3D38(V_827B3938 *a, Elem_827B3D38 *v)
{
    unsigned int idx = a->size >> 8;
    if (idx >= a->nblocks) {
        a->Grow(idx);
    }
    ((Elem_827B3D38 **)a->blocks)[idx][a->size & 0xff] = *v;
    a->size++;
}
