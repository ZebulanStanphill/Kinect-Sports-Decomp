typedef struct Var_8229C9C0 {
    int a;
    int b;
    union {
        double d;
        int i;
    } u;
} Var_8229C9C0;
typedef struct Panel_8229C9C0 {
    void *movie;
    int pad4[3];
    int open;
} Panel_8229C9C0;
extern void fn_82273CD8(Var_8229C9C0 *, int);
extern void fn_82273C88(Var_8229C9C0 *);
extern void fn_82672C20(void *, const char *, Var_8229C9C0 *, int);

void fn_8229C9C0(Panel_8229C9C0 *self, int type, int a, int b, int c, int d)
{
    Var_8229C9C0 t;
    Var_8229C9C0 v[4];
    Var_8229C9C0 *p;
    int i;

    t.a = 0;
    self->open = 1;
    t.b = 0;
    fn_82273CD8(&t, 3);
    t.u.d = type;
    fn_82672C20(self->movie, "_root.SetPanelType", &t, 1);
    fn_82273C88(&t);
    for (i = 0; i < 4; i++) { v[i].a = 0; v[i].b = 0; }
    fn_82273CD8(&v[0], 5); v[0].u.i = a;
    fn_82273CD8(&v[1], 5); v[1].u.i = b;
    fn_82273CD8(&v[2], 5); v[2].u.i = c;
    fn_82273CD8(&v[3], 5); v[3].u.i = d;
    fn_82672C20(self->movie, "_root.mc_panel.Open", v, 4);
    p = v + 4; i = 3; do { p--; fn_82273C88(p); } while (--i >= 0);
}
