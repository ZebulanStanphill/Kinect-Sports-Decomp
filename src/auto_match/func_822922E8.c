typedef struct Var_822922E8 {
    int a;
    int b;
    union {
        double d;
        int i;
    } u;
} Var_822922E8;
typedef struct Obj_822922E8 {
    int pad[3];
    void **movie;
} Obj_822922E8;
extern void fn_82273CD8(Var_822922E8 *, int);
extern void fn_82273C88(Var_822922E8 *);
extern void fn_82672C20(void *, const char *, Var_822922E8 *, int);

void fn_822922E8(Obj_822922E8 *self, int n, int m)
{
    void **movie = self->movie;
    Var_822922E8 v[2];
    Var_822922E8 *p;
    int i;

    for (i = 0; i < 2; i++) { v[i].a = 0; v[i].b = 0; }
    fn_82273CD8(&v[0], 3); v[0].u.d = (double)(n + 1);
    fn_82273CD8(&v[1], 3); v[1].u.d = (double)m;
    fn_82672C20(*movie, "_root.mainCtrl.setPlayerPosition", v, 2);
    p = v + 2; i = 1; do { p--; fn_82273C88(p); } while (--i >= 0);
}
