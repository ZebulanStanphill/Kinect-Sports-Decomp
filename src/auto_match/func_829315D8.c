typedef struct Obj { void *vtbl; int type; int x8; int xc; int x10; int x14; } Obj;
extern char lbl_8202F128[];

void fn_829315D8(Obj *o, int a, int b)
{
    o->x10 = a;
    o->x14 = b;
    o->type = 0x13;
    o->x8 = 0;
    o->vtbl = lbl_8202F128;
    o->xc = 0;
}
