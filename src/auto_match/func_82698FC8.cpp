#include "game/Vec_82698FC8.h"

// A reference-counted object: vtable at +0, reference count at +4.
struct Obj_82698FC8 {
    int pad;
    int refs;
    int pad2[3];
    int a14;
    unsigned int b18;
    char pad3[0x66 - 0x1c];
    unsigned char flags;
};

extern "C" void fn_8267C498(Obj_82698FC8 *);

void Vec_82698FC8::Method_82698FC8(unsigned int p2)
{
    unsigned int i, cnt;
    Obj_82698FC8 *o;
    cnt = n;
    for (i = 0; i < cnt; i++) {
        o = data[i];
        if (o != 0)
            o->refs++;
        if (o->a14 >= 0 && o->a14 < 0x4000 && o->b18 > p2)
            data[i]->flags |= 0x40;
        fn_8267C498(o);
    }
}
