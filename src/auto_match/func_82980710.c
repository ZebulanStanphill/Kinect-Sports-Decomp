typedef struct { char pad[0x1c]; int f1c; } Sub_82980710;
typedef struct {
    char pad0[0x20];
    void *f20;
    char pad1[4];
    char f28[0x48];
    int f70;
    char pad2[4];
    Sub_82980710 *f78;
} Obj_82980710;
typedef struct { char pad[0x10]; int f10; char pad1[4]; void *f18; char pad2[0x14]; int f30; } Node_82980710;
extern void *fn_82930318(int n);
extern Node_82980710 *fn_82932B38(void *p);
extern void *fn_82933088(void *p, int a, int b, int c, int d, int e, void *f);
extern void *fn_829304E0(void *p, void *a, int b, const char *s);

void *fn_82980710(Obj_82980710 *o)
{
    Node_82980710 *n;
    void *m;
    void *r;
    void *p;
    o->f78->f1c = 1;
    if (o->f20 != 0) {
        p = fn_82930318(0x34);
        if (p != 0)
            n = fn_82932B38(p);
        else
            n = 0;
        if (n != 0) {
            n->f10 = 9;
            n->f30 = o->f70;
            o->f70 = o->f70 + 1;
            p = fn_82930318(0x50);
            if (p != 0)
                m = fn_82933088(p, 0, 0, 0, 0, 1, o->f28);
            else
                m = 0;
            if (m != 0) {
                n->f18 = m;
                p = fn_82930318(0x14);
                if (p != 0)
                    r = fn_829304E0(p, n, 0, "Stmts");
                else
                    r = 0;
                if (r != 0)
                    return r;
            }
        }
    }
    return 0;
}
