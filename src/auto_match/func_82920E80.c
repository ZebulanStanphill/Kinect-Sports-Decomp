typedef struct Obj Obj;
typedef struct ObjVtbl {
    void *f0;
    void (*get)(Obj *, unsigned int, unsigned int, void *);
    void (*set)(Obj *, unsigned int, unsigned int, void *);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
    char pad04[0xc];
    int f10;
    char pad14[0x54];
    unsigned int w;
    unsigned int h;
    unsigned int d;
};
typedef struct Pair {
    Obj *a;
    Obj *b;
} Pair;
extern void *fn_8265C940(unsigned int size, unsigned int flags);
extern void fn_8265C990(void *p, unsigned int flags);

static void *Alloc(unsigned int n) { return fn_8265C940(n, 0x24810000); }

int fn_82920E80(Pair *p)
{
    void *buf;
    unsigned int x;
    unsigned int y;

    if (p->b->w == p->a->w && p->b->h == p->a->h && p->b->d == p->a->d) {
        buf = Alloc(p->b->w << 4);
        if (buf != 0) {
            if (p->b->f10 != 0 && p->a->f10 != 0) {
                p->b->f10 = 0;
                p->a->f10 = 0;
            }
            for (y = 0; y < p->b->d; y++) {
                for (x = 0; x < p->b->h; x++) {
                    p->a->vtbl->get(p->a, x, y, buf);
                    p->b->vtbl->set(p->b, x, y, buf);
                }
            }
            fn_8265C990(buf, 0x24810000);
            return 0;
        }
    }
    return 0x80004005;
}
