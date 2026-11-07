typedef struct Elem_822A0138 {
    int a;
    int b;
    double d;
} Elem_822A0138;

extern void fn_82273CD8(Elem_822A0138 *e, int type);
extern void fn_82273C88(Elem_822A0138 *e);
extern void fn_82672C20(int obj, const char *name, Elem_822A0138 *args, int count);
extern double lbl_821954B0[];

void fn_822A0138(int *p, int idx, double f)
{
    Elem_822A0138 e[3];
    Elem_822A0138 *q;
    int i;

    if (p[idx + 0xd] == 0) {
        p[idx + 0xd] = 1;
        q = e;
        for (i = 0; i < 3; i++) {
            q->a = 0;
            q->b = 0;
            q++;
        }
        fn_82273CD8(&e[0], 3);
        e[0].d = (double)(idx + 1);
        fn_82273CD8(&e[1], 3);
        e[1].d = f;
        fn_82273CD8(&e[2], 3);
        e[2].d = lbl_821954B0[13];
        fn_82672C20(*p, "_root.mainCtrl.showFalseStartPenalty", e, 3);
        q = &e[3];
        i = 2;
        do {
            q--;
            fn_82273C88(q);
            i--;
        } while (i >= 0);
    }
}
