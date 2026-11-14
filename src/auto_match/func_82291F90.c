typedef struct Var_82291F90 {
    int a;
    int b;
    union {
        double d;
        int i;
        const char *s;
    } u;
} Var_82291F90;

typedef struct Ref_82291F90 {
    void *p;
    void *rc;
} Ref_82291F90;

extern const double lbl_821954B0[0x145];
extern void fn_82273CD8(Var_82291F90 *, int);
extern void fn_82273C88(Var_82291F90 *);
extern Ref_82291F90 *fn_8229AE10(Ref_82291F90 *, void *);
extern void fn_8266F600(void *, const char *, char *, int);
extern void fn_82672C20(void *, const char *, Var_82291F90 *, int);
extern void fn_822315A0(void *);

void fn_82291F90(void *self, int slot, int score, int rank, const char *name)
{
    Var_82291F90 v[5];
    char buf[0x20];
    Ref_82291F90 r2;
    Ref_82291F90 r;
    Var_82291F90 *p;
    int i;

    for (i = 0; i < 5; i++) { v[i].a = 0; v[i].b = 0; }
    fn_82273CD8(&v[0], 3); v[0].u.d = (double)slot;
    fn_82273CD8(&v[2], 3); v[2].u.d = lbl_821954B0[13];
    fn_82273CD8(&v[3], 3); v[3].u.d = (double)score;
    fn_82273CD8(&v[4], 3); v[4].u.d = (double)rank;
    if (name != 0) {
        fn_8266F600(fn_8229AE10(&r, self)->p, name, buf, 0x20);
        if (r.rc != 0) {
            fn_822315A0(r.rc);
        }
        fn_82273CD8(&v[1], 4); v[1].u.s = buf;
    } else {
        fn_82273CD8(&v[1], 1);
    }
    fn_82672C20(fn_8229AE10(&r2, self)->p, "_root.mc_topscorePanel.setSlotDataTime", v, 5);
    if (r2.rc != 0) {
        fn_822315A0(r2.rc);
    }
    p = v + 5; i = 4; do { p--; fn_82273C88(p); } while (--i >= 0);
}
