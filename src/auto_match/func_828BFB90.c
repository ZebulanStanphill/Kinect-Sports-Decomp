extern void *fn_8265C9E0(unsigned int size);
extern void *fn_828BDDA0(void *p);
extern char lbl_82025C44[];
extern char lbl_82025C48[];

typedef struct { void *first; void *last; void *end; } Vec;
typedef struct {
    void *vtbl;
    int pad[0x13];
    void *vtbl2;
    int pad2[0xc];
    Vec v;
    int pad3[2];
} Obj;

static void Vec_init(Vec *v) { v->first = 0; v->last = 0; v->end = 0; }

Obj *fn_828BFB90(void)
{
    Obj *p = (Obj *)fn_8265C9E0(0x98);
    if (p != 0) {
        fn_828BDDA0(p);
        p->vtbl = lbl_82025C48;
        p->vtbl2 = lbl_82025C44;
        Vec_init(&p->v);
        return p;
    }
    return 0;
}
