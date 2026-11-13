typedef struct Var_8227B800 {
    int a;
    int b;
    union {
        double d;
        int i;
    } u;
} Var_8227B800;

typedef struct Ref_8227B800 {
    void *p;
    void *rc;
} Ref_8227B800;

extern void fn_82273CD8(Var_8227B800 *, int);
extern void fn_82273C88(Var_8227B800 *);
extern Ref_8227B800 *fn_82279C58(Ref_8227B800 *, void *);
extern void fn_82672C20(void *, const char *, Var_8227B800 *, int);
extern void fn_822315A0(void *);

void fn_8227B800(void *self, unsigned int n, unsigned int m)
{
    Var_8227B800 v[2];
    Ref_8227B800 r;
    Var_8227B800 *p;
    int i;

    for (i = 0; i < 2; i++) { v[i].a = 0; v[i].b = 0; }
    fn_82273CD8(&v[0], 3); v[0].u.d = (double)n;
    fn_82273CD8(&v[1], 3); v[1].u.d = (double)m;
    fn_82672C20(fn_82279C58(&r, self)->p, "_root.mainCtrl.setUpBadgeConstant", v, 2);
    if (r.rc != 0) {
        fn_822315A0(r.rc);
    }
    p = v + 2; i = 1; do { p--; fn_82273C88(p); } while (--i >= 0);
}
