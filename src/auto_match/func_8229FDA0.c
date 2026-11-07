typedef struct Var_8229FDA0 {
    int a;
    int b;
    union {
        double d;
        int i;
    } u;
} Var_8229FDA0;
typedef struct Obj_8229FDA0 {
    void *f0;
    char pad[0x98 - 4];
    int lives;
} Obj_8229FDA0;
extern double lbl_821954B0[];
extern void fn_82273CD8(Var_8229FDA0 *, int);
extern void fn_82273C88(Var_8229FDA0 *);
extern void fn_82672C20(void *, const char *, Var_8229FDA0 *, int);

void fn_8229FDA0(Obj_8229FDA0 *self, int lives)
{
    Var_8229FDA0 v[2];
    Var_8229FDA0 *p;
    int i;

    if (self->lives != lives) {
        self->lives = lives;
        for (i = 0; i < 2; i++) {
            v[i].a = 0;
            v[i].b = 0;
        }
        fn_82273CD8(&v[0], 3);
        v[0].u.d = lbl_821954B0[15];
        fn_82273CD8(&v[1], 3);
        v[1].u.d = (double)lives;
        fn_82672C20(self->f0, "_root.mainCtrl.setNumberOfLifes", v, 2);
        p = v + 2;
        i = 1;
        do {
            p--;
            fn_82273C88(p);
        } while (--i >= 0);
    }
}
