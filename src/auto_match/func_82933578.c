typedef struct { void *vt; int f4; int f8; int fc; } Base;
typedef struct { unsigned __int64 v[4]; } Blk;
typedef struct { Base b; int f10; int f14; int f18; int f1c; Blk blk; } Obj;
extern char lbl_8202F1A0[];

Obj *fn_82933578(Obj *o, int a, int b, int c, Blk *src)
{
    o->f10 = a;
    o->f18 = b;
    o->f1c = c;
    o->b.f4 = 0xf;
    o->b.f8 = 0;
    o->b.vt = lbl_8202F1A0;
    o->b.fc = 0;
    o->blk = *src;
    return o;
}
