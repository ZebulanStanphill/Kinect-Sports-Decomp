extern void *fn_8265C9E0(unsigned int size);
extern void *fn_828BDDA0(void *p);
extern char lbl_82025CC8[];
extern char lbl_82025CD0[];

typedef struct { void *first; void *last; void *end; } Vec;
typedef struct {
    void *vtbl;
    int pad[0x13];
    void *vtbl2;
    int pad2[0xd];
    Vec v;
    int pad3[1];
} Obj;

static void Vec_init(Vec *v) { v->first = 0; v->last = 0; v->end = 0; }

Obj *fn_828BFC10(void)
{
    Obj *p = (Obj *)fn_8265C9E0(0x98);
    if (p != 0) {
        fn_828BDDA0(p);
        p->vtbl = lbl_82025CD0;
        p->vtbl2 = lbl_82025CC8;
        Vec_init(&p->v);
        return p;
    }
    return 0;
}
