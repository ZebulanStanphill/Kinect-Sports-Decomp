typedef struct Obj { void *vtbl; int x4; int x8; int xc; int x10; int x14; int x18; int x1c; int x20; int x24; } Obj;
extern char lbl_8202F11C[];

void fn_82931328(Obj *o, int a, int b)
{
    o->x14 = a;
    o->x10 = b;
    o->x4 = 0x15;
    o->x8 = 0;
    o->vtbl = lbl_8202F11C;
    o->xc = 0;
    o->x18 = 0;
    o->x1c = 0;
    o->x20 = 0;
    o->x24 = 0;
}
