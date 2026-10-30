typedef struct Ref_82480298 {
    void *p;
    unsigned int *rc;
} Ref_82480298;
typedef struct Elem_82480298 {
    void *a;
    char b[8];
} Elem_82480298;
typedef struct Vec_82480298 {
    Elem_82480298 *begin;
    Elem_82480298 *end;
} Vec_82480298;
typedef struct Mgr_82480298 {
    char pad[0x14];
    Vec_82480298 vec;
} Mgr_82480298;
typedef struct Obj_82480298 {
    char pad0[0x14];
    Mgr_82480298 *mgr;
    char pad18[0x4c - 0x18];
    int f4c;
    char pad50[0x78 - 0x50];
    void *f78;
    char pad7c[0xa4 - 0x7c];
    void *fa4;
    char pada8[0xc8 - 0xa8];
    void **fc8;
    char padcc[0xec - 0xcc];
    void *fec;
    int ff0;
} Obj_82480298;
typedef struct Global_82480298 {
    char pad[0xf0];
    int f0;
    int f4;
} Global_82480298;
extern Global_82480298 *lbl_8327F844;
extern void fn_824801F8(Obj_82480298 *o);
extern void fn_8226D6A0(void *p);
extern void fn_82356F98(Ref_82480298 *r);
extern void fn_823F2E20(void *dst, Ref_82480298 *r);
extern void fn_822315A0(unsigned int *rc);
extern Elem_82480298 **fn_822820E0(void *out, Vec_82480298 *v, Elem_82480298 *it);
extern void fn_822848B8(void *p);
extern void fn_822746B8(void *p, int a);
extern void fn_82672C20(void *a, const char *s, int b, int c);
extern void fn_8247DD58(void *p);
extern void fn_8265CA20(void *p);

static void clear(Global_82480298 *g)
{
    if (g != 0) {
        g->f0 = 0;
        g->f4 = 0;
    }
}

void fn_82480298(Obj_82480298 *param_1)
{
    Mgr_82480298 *m;
    Elem_82480298 *p;
    struct {
        char out[8];
        Ref_82480298 ref;
    } L;
    void *q;

    fn_824801F8(param_1);
    if (param_1->f4c == 0) {
        m = param_1->mgr;
        for (p = m->vec.begin; p < m->vec.end; p = *fn_822820E0(L.out, &m->vec, p)) {
            fn_8226D6A0(p->a);
            fn_82356F98(&L.ref);
            fn_823F2E20(p->b, &L.ref);
            if (L.ref.rc != 0) {
                fn_822315A0(L.ref.rc);
            }
        }
        if (param_1->f78 != 0) {
            fn_822848B8(param_1->f78);
            param_1->f78 = 0;
        }
        if (param_1->fec != 0) {
            fn_822746B8(param_1->fec, 0);
            param_1->fec = 0;
        }
    }
    if (param_1->fc8 != 0) {
        fn_82672C20(*param_1->fc8, "HideAllAvatarTagsImmediately", 0, 0);
        param_1->ff0 = 0;
    }
    q = param_1->fa4;
    if (q != 0) {
        fn_8247DD58(q);
        fn_8265CA20(q);
        param_1->fa4 = 0;
    }
    clear(lbl_8327F844);
}
