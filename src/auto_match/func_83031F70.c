typedef struct Obj {
    void (**vtbl)(struct Obj *);
} Obj;

extern Obj *fn_82FAB9C0(char *p);
extern int fn_83021C40(char *a, Obj *b);
extern void fn_83035CC0(Obj *p, int a);
extern char *lbl_832642E0;

int fn_83031F70(char *self)
{
    Obj *p;
    int r;

    p = fn_82FAB9C0(lbl_832642E0 + 0xcbc);
    if (p == 0)
        return 0xf;
    r = fn_83021C40(self + 0xa8, p);
    if (r == 1) {
        fn_83035CC0(p, 0);
        p->vtbl[2](p);
    }
    p->vtbl[2](p);
    return r;
}
