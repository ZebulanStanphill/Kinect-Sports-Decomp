typedef struct Var_8228C2C8 {
    int a;
    int b;
    union {
        double d;
        const char *s;
    } u;
} Var_8228C2C8;

typedef struct Ref_8228C2C8 {
    void *p;
    void *rc;
} Ref_8228C2C8;

extern void fn_82273CD8(Var_8228C2C8 *, int);
extern void fn_82273C88(Var_8228C2C8 *);
extern Ref_8228C2C8 *fn_82279C58(Ref_8228C2C8 *, void *);
extern void fn_82672C20(void *, const char *, Var_8228C2C8 *, int);
extern void fn_822315A0(void *);

void fn_8228C2C8(void *self, const char *text)
{
    Var_8228C2C8 v;
    Ref_8228C2C8 r;
    Ref_8228C2C8 r2;
    unsigned char ok;

    v.a = 0;
    v.b = 0;
    ok = fn_82279C58(&r, self)->p != 0;
    if (r.rc != 0) {
        fn_822315A0(r.rc);
    }
    if (ok) {
        fn_82273CD8(&v, 5);
        v.u.s = text;
        fn_82672C20(fn_82279C58(&r2, self)->p, "_root.SetText", &v, 1);
        if (r2.rc != 0) {
            fn_822315A0(r2.rc);
        }
    }
    fn_82273C88(&v);
}
