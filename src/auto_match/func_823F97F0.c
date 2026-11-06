typedef unsigned int size_t;
void *memcpy(void *d, const void *s, size_t n);
typedef struct {
    unsigned int a;
    int b;
    int c;
    unsigned char d;
} A_823F97F0;
typedef struct {
    int id;
    int n;
} B_823F97F0;
typedef struct {
    int n;
    int v[7];
} D_823F97F0;
typedef struct Src_823F97F0 Src_823F97F0;
typedef struct {
    void *f0, *f4, *f8, *fc, *f10;
    void (*get)(Src_823F97F0 *s, int key, void *out);
} SrcVt_823F97F0;
struct Src_823F97F0 { SrcVt_823F97F0 *vt; };
typedef struct {
    int f0;
    int f4;
    int offA;
    int offB;
    int offC;
    int offD;
    int offE;
    Src_823F97F0 *srcA;
    int f20;
    Src_823F97F0 *srcB;
    int f28;
    Src_823F97F0 *srcC;
    int f30;
    Src_823F97F0 *srcD;
    int f38;
    Src_823F97F0 *srcE;
} Obj_823F97F0;

void fn_823F97F0(Obj_823F97F0 *o, int key, char *rec)
{
    A_823F97F0 a;
    B_823F97F0 b;
    B_823F97F0 c;
    D_823F97F0 d;
    D_823F97F0 e;
    int i;
    a.b = -1;
    b.id = -1;
    c.id = -1;
    a.a = 0xffffffff;
    a.c = 2;
    a.d = 0;
    b.n = 1;
    c.n = 1;
    d.n = 0;
    for (i = 0; i < 7; i++) {
        d.v[i] = -1;
    }
    e.n = 0;
    for (i = 0; i < 7; i++) {
        e.v[i] = -1;
    }
    o->srcA->vt->get(o->srcA, key, &a);
    o->srcB->vt->get(o->srcB, key, &b);
    o->srcC->vt->get(o->srcC, key, &c);
    o->srcD->vt->get(o->srcD, key, &d);
    o->srcE->vt->get(o->srcE, key, &e);
    if (rec != 0) {
        *(A_823F97F0 *)(o->offA + rec) = a;
        *(B_823F97F0 *)(o->offB + rec) = b;
        *(B_823F97F0 *)(o->offC + rec) = c;
        memcpy(o->offD + rec, &d, sizeof(d));
        memcpy(o->offE + rec, &e, sizeof(e));
    }
}
