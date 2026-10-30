typedef struct Obj { void *vtbl; int type; int x8; int xc; int x10; int x14; } Obj;
extern char lbl_8202F14C[];

void fn_82931B90(Obj *o)
{
    o->type = 8;
    o->x8 = 0;
    o->vtbl = lbl_8202F14C;
    o->xc = 0;
    o->x10 = 0;
    o->x14 = 0;
}
