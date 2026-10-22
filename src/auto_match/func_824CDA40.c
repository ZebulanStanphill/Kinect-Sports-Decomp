extern void fn_82517E78(void *p);
extern void fn_82F51178(void *p, int n);
extern void *fn_82F513F8(void *p);
extern char lbl_821C0BE0[];
extern char lbl_821C0C24[];

typedef struct Inner {
    char pad0[0x80];
    char *p80;
    char pad1[0x94 - 0x84];
    void *p94;
} Inner;

typedef struct Holder {
    char pad0[0x14];
    Inner *inner;
} Holder;

typedef struct VObj {
    void (**vt)(struct VObj *, int);
} VObj;

typedef struct Obj {
    void *vt0;
    char pad0[0x68 - 4];
    void *vt68;
    char pad1[0x80 - 0x6C];
    Holder *holder;
    char pad2[0x94 - 0x84];
    VObj *child;
} Obj;

void fn_824CDA40(Obj *o)
{
    Holder *h = o->holder;
    Inner *in;

    o->vt0 = lbl_821C0BE0;
    o->vt68 = lbl_821C0C24;
    if (h != 0) {
        in = h->inner;
        if (in != 0) {
            if (fn_82F513F8(*(void **)(in->p80 + 0x20)) == in->p94) {
                fn_82F51178(*(void **)(in->p80 + 0x20), 0);
            }
            in->p80 = 0;
        }
        h->inner = 0;
        o->holder = 0;
    }
    if (o->child != 0) {
        o->child->vt[0](o->child, 1);
    }
    fn_82517E78(o);
}
