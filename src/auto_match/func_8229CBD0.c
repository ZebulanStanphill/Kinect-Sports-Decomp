typedef struct Var_8229CBD0 {
    int a;
    int b;
    union {
        double d;
        int i;
    } u;
} Var_8229CBD0;
extern void fn_82273CD8(Var_8229CBD0 *, int);
extern void fn_82273C88(Var_8229CBD0 *);
extern void fn_82672C20(void *, const char *, Var_8229CBD0 *, int);
extern const double lbl_821954B0[];

void fn_8229CBD0(int *self, int line1, int line2)
{
    Var_8229CBD0 t;
    Var_8229CBD0 v[2];
    Var_8229CBD0 *p;
    int i;

    t.a = 0;
    t.b = 0;
    fn_82273CD8(&t, 3);
    t.u.d = lbl_821954B0[13];
    fn_82672C20((void *)*self, "_root.SetObjectivePanelType", &t, 1);
    fn_82273C88(&t);
    for (i = 0; i < 2; i++) { v[i].a = 0; v[i].b = 0; }
    fn_82273CD8(&v[0], 5); v[0].u.i = line1;
    fn_82273CD8(&v[1], 5); v[1].u.i = line2;
    fn_82672C20((void *)*self, "_root.mc_objective.OpenMini", v, 2);
    p = v + 2; i = 1; do { p--; fn_82273C88(p); } while (--i >= 0);
}
