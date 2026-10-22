typedef struct Slot { int state; char pad[0x41c]; } Slot;
typedef struct Sub {
    char pad[0x18];
    int m18;
    char pad1c[0x634 - 0x1c];
    char m634[0x838 - 0x634];
    Slot slots[4];

    unsigned int mode;
} Sub;

typedef struct Single {
    int pad;
    unsigned char b4;
} Single;

typedef struct Obj {
    char pad[0x30];
    int m30;
    int m34;
    int m38;
    char pad3c[0x48 - 0x3c];
    Sub *sub;
    char pad4c[0xa4 - 0x4c];
    void *ma4;
    char pada8[0xb0 - 0xa8];
    char mb0[4];
} Obj;

extern Single *lbl_832975B0;
extern Single *fn_82250A18(void);
extern void fn_8247DD58(void *p);
extern void fn_8247F240(Obj *o, int v);
extern void fn_824809B0(Obj *o, void *p);
extern void fn_82485850(Sub *s, void *p);
extern void fn_82485AC8(Sub *s);
extern void fn_82485BD8(Sub *s, int v);
extern void fn_82486628(Sub *s);
extern void fn_8265CA20(void *p);

static Single *GetSingle(void)
{
    Single *s = lbl_832975B0;
    if (lbl_832975B0 == 0) {
        s = fn_82250A18();
    }
    return s;
}


void fn_82480BF8(Obj *o)
{
    int i;
    void *a4;
    Sub *s;
    int v;

    fn_82485850(o->sub, o->sub->m634);
    fn_82485AC8(o->sub);
    fn_82486628(o->sub);
    { Single *g = GetSingle(); int r = 0; Sub *sb = o->sub; if (!g->b4) r = 1; fn_82485BD8(sb, r); }
    for (i = 0; i < 4; i++) {
        if (o->sub->slots[i].state == 3) goto found;
    }
    a4 = o->ma4;
    if (a4 != 0) {
        fn_8247DD58(a4);
        fn_8265CA20(a4);
        o->ma4 = 0;
    }
found:
    fn_8247F240(o, 1);
    fn_824809B0(o, o->mb0);
    s = o->sub;
    switch (s->mode) {
    case 0:
        s->m18 = o->m30;
        break;
    case 1:
        if (s->slots[1].state == 4) {
            s->m18 = o->m30;
        } else {
            s->m18 = o->m34;
        }
        break;
    default:
        s->m18 = o->m38;
        break;
    }
}
