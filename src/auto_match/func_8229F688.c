typedef struct Var_8229F688 {
    int a;
    int b;
    union {
        double d;
        int i;
    } u;
} Var_8229F688;
typedef struct Obj_8229F688 {
    void *f0;
    char pad[0x9c - 4];
    char name[0x40];
} Obj_8229F688;
extern int __ascii_stricmp(const char *, const char *);
extern void fn_82273CD8(Var_8229F688 *, int);
extern void fn_82273C88(Var_8229F688 *);
extern void fn_82672C20(void *, const char *, Var_8229F688 *, int);
extern void fn_82F64988(char *, int, const char *);

void fn_8229F688(Obj_8229F688 *self, const char *param_2, int param_3)
{
    Var_8229F688 v[2];
    Var_8229F688 *p;
    int i;

    if (__ascii_stricmp(param_2, self->name) != 0) {
        for (i = 0; i < 2; i++) {
            v[i].a = 0;
            v[i].b = 0;
        }
        fn_82273CD8(&v[0], 3);
        v[0].u.d = (double)(param_3 + 1);
        fn_82273CD8(&v[1], 5);
        v[1].u.i = (int)param_2;
        fn_82672C20(self->f0, "_root.mainCtrl.setPriCaptionText", v, 2);
        fn_82F64988(self->name, 0x40, param_2);
        p = v + 2;
        i = 1;
        do {
            p--;
            fn_82273C88(p);
        } while (--i >= 0);
    }
}
