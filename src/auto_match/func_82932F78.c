typedef struct Obj { void *vtbl; int type; int x8; int xc; int x10; int x14; } Obj;
extern char lbl_8202F188[];

void fn_82932F78(Obj *o)
{
    o->type = 0xd;
    o->x8 = 0;
    o->vtbl = lbl_8202F188;
    o->xc = 0;
    o->x10 = 0;
    o->x14 = 0;
}
