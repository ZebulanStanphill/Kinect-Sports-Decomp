typedef struct Var_82274130 {
    int a;
    int b;
    union {
        double d;
        int i;
    } u;
} Var_82274130;

typedef struct Ref_82274130 {
    void *p;
    void *rc;
} Ref_82274130;

extern void fn_82273CD8(Var_82274130 *, int);
extern void fn_82273C88(Var_82274130 *);
extern Ref_82274130 *fn_82279C58(Ref_82274130 *, void *);
extern void fn_82672C20(void *, const char *, Var_82274130 *, int);
extern void fn_822315A0(void *);

void fn_82274130(void *self, int n, int m)
{
    Var_82274130 v[2];
    Ref_82274130 r;
    Var_82274130 *p;
    int i;

    for (i = 0; i < 2; i++) { v[i].a = 0; v[i].b = 0; }
    fn_82273CD8(&v[0], 3); v[0].u.d = (double)n;
    fn_82273CD8(&v[1], 3); v[1].u.d = (double)m;
    fn_82672C20(fn_82279C58(&r, self)->p, "_root.setOverlayIcon", v, 2);
    if (r.rc != 0) {
        fn_822315A0(r.rc);
    }
    p = v + 2; i = 1; do { p--; fn_82273C88(p); } while (--i >= 0);
}
