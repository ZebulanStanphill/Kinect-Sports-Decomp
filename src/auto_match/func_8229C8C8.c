typedef struct Var_8229C8C8 {
    int a;
    int b;
    union {
        double d;
        int i;
    } u;
} Var_8229C8C8;
extern void fn_82273CD8(Var_8229C8C8 *, int);
extern void fn_82273C88(Var_8229C8C8 *);
extern void fn_82672C20(void *, const char *, Var_8229C8C8 *, int);

void fn_8229C8C8(int *self, int type, int arg1, int arg2, int arg3)
{
    Var_8229C8C8 t;
    Var_8229C8C8 v[3];
    Var_8229C8C8 *p;
    int i;

    self[4] = 0;
    t.a = 0;
    t.b = 0;
    fn_82273CD8(&t, 3);
    t.u.d = (double)type;
    fn_82672C20((void *)*self, "_root.SetPanelType", &t, 1);
    fn_82273C88(&t);
    for (i = 0; i < 3; i++) { v[i].a = 0; v[i].b = 0; }
    fn_82273CD8(&v[0], 5); v[0].u.i = arg1;
    fn_82273CD8(&v[1], 5); v[1].u.i = arg2;
    fn_82273CD8(&v[2], 5); v[2].u.i = arg3;
    fn_82672C20((void *)*self, "_root.mc_panel.Open", v, 3);
    p = v + 3; i = 2; do { p--; fn_82273C88(p); } while (--i >= 0);
}
