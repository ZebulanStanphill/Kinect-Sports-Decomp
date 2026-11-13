typedef struct Var_8229CB40 {
    int a;
    int b;
    union {
        double d;
        int i;
    } u;
} Var_8229CB40;
extern void fn_82273CD8(Var_8229CB40 *, int);
extern void fn_82273C88(Var_8229CB40 *);
extern void fn_82672C20(void *, const char *, Var_8229CB40 *, int);

void fn_8229CB40(int *self, int title, int subtitle)
{
    Var_8229CB40 v[2];
    Var_8229CB40 *p;
    int i;
    for (i = 0; i < 2; i++) { v[i].a = 0; v[i].b = 0; }
    fn_82273CD8(&v[0], 5); v[0].u.i = title;
    fn_82273CD8(&v[1], 5); v[1].u.i = subtitle;
    fn_82672C20((void *)*self, "_root.mc_panel.SetTitleText", v, 2);
    p = v + 2; i = 1; do { p--; fn_82273C88(p); } while (--i >= 0);
}
