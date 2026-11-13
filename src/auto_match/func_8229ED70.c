typedef struct Var_8229ED70 {
    int a;
    int b;
    union {
        double d;
        int i;
    } u;
} Var_8229ED70;
extern void fn_82273CD8(Var_8229ED70 *, int);
extern void fn_82273C88(Var_8229ED70 *);
extern void fn_82672C20(void *, const char *, Var_8229ED70 *, int);
extern void fn_8229EC50(int *self, int a);

void fn_8229ED70(int *self, int a, int line1, int line2)
{
    Var_8229ED70 v[2];
    Var_8229ED70 *p;
    int i;
    fn_8229EC50(self, a);
    if (self[4] == 0) {
        for (i = 0; i < 2; i++) { v[i].a = 0; v[i].b = 0; }
        fn_82273CD8(&v[0], 5); v[0].u.i = line1;
        fn_82273CD8(&v[1], 5); v[1].u.i = line2;
        fn_82672C20((void *)*self, "_root.mc_herodoublelinecaption.displayDoubleCaption", v, 2);
        self[4] = 1;
        p = v + 2; i = 1; do { p--; fn_82273C88(p); } while (--i >= 0);
    }
}
