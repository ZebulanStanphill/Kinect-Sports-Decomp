typedef struct Var_8229E360 {
    int a;
    int b;
    union {
        double d;
        int i;
    } u;
} Var_8229E360;
typedef struct {
    int pad0;
    unsigned rc;
} Tmp_8229E360;
extern void fn_82273CD8(Var_8229E360 *, int);
extern void fn_82273C88(Var_8229E360 *);
extern int *fn_82279C58(Tmp_8229E360 *, void *);
extern void fn_82672C20(int, const char *, Var_8229E360 *, int);
extern void fn_822315A0(unsigned);

void fn_8229E360(void **self, int title, int text)
{
    Var_8229E360 v[2];
    Tmp_8229E360 t;
    Var_8229E360 *p;
    int i;
    for (i = 0; i < 2; i++) { v[i].a = 0; v[i].b = 0; }
    fn_82273CD8(&v[0], 5); v[0].u.i = title;
    fn_82273CD8(&v[1], 5); v[1].u.i = text;
    fn_82672C20(*fn_82279C58(&t, *self), "_root.SetMsgBoxText", v, 2);
    if (t.rc != 0) {
        fn_822315A0(t.rc);
    }
    p = v + 2; i = 1; do { p--; fn_82273C88(p); } while (--i >= 0);
}
