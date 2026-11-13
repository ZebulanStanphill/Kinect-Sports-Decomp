typedef struct Var_8229FCE8 {
    int a;
    int b;
    union {
        double d;
        int i;
    } u;
} Var_8229FCE8;
extern void fn_82273CD8(Var_8229FCE8 *, int);
extern void fn_82273C88(Var_8229FCE8 *);
extern void fn_82672C20(void *, const char *, Var_8229FCE8 *, int);

void fn_8229FCE8(int *self, int n, int m)
{
    Var_8229FCE8 v[2];
    Var_8229FCE8 *p;
    int i;

    for (i = 0; i < 2; i++) { v[i].a = 0; v[i].b = 0; }
    fn_82273CD8(&v[0], 3); v[0].u.d = (double)(n + 1);
    fn_82273CD8(&v[1], 3); v[1].u.d = (double)m;
    fn_82672C20((void *)*self, "_root.mainCtrl.setIsKOPoints", v, 2);
    p = v + 2; i = 1; do { p--; fn_82273C88(p); } while (--i >= 0);
}
