typedef struct Var_8229CCA8 {
    int a;
    int b;
    union {
        double d;
        int i;
    } u;
} Var_8229CCA8;
extern void fn_82273CD8(Var_8229CCA8 *, int);
extern void fn_82273C88(Var_8229CCA8 *);
extern void fn_82672C20(void *, const char *, Var_8229CCA8 *, int);
extern const double lbl_821954B0[];

void fn_8229CCA8(int *self, int a0, int a1, int a2, int a3, int a4, int a5, int a6)
{
    Var_8229CCA8 t;
    Var_8229CCA8 v[7];
    Var_8229CCA8 *p;
    int i;

    t.a = 0;
    t.b = 0;
    fn_82273CD8(&t, 3);
    t.u.d = lbl_821954B0[15];
    fn_82672C20((void *)*self, "_root.SetObjectivePanelType", &t, 1);
    fn_82273C88(&t);
    for (i = 0; i < 7; i++) { v[i].a = 0; v[i].b = 0; }
    fn_82273CD8(&v[0], 5); v[0].u.i = a0;
    fn_82273CD8(&v[1], 5); v[1].u.i = a1;
    fn_82273CD8(&v[2], 5); v[2].u.i = a2;
    fn_82273CD8(&v[3], 5); v[3].u.i = a3;
    fn_82273CD8(&v[4], 5); v[4].u.i = a4;
    fn_82273CD8(&v[5], 5); v[5].u.i = a5;
    fn_82273CD8(&v[6], 5); v[6].u.i = a6;
    fn_82672C20((void *)*self, "_root.mc_objective.OpenPartyMode", v, 7);
    p = v + 7; i = 6; do { p--; fn_82273C88(p); } while (--i >= 0);
}
