extern int fn_822315A0(void *p);
extern int fn_827D50B8(int a);
extern int fn_827D50D0(int a);
extern int *fn_827D9C40(void *out, int a);

typedef struct {
    int a;
    void *b;
} Pair;

void fn_825BD8D0(int param_1)
{
    unsigned int i;
    int *p;
    Pair s;

    if (fn_827D50B8(*(int *)(param_1 + 0x40)) == 0x3e4) {
        fn_827D50D0(*(int *)(param_1 + 0x40));
        fn_827D50D0(*(int *)(param_1 + 0x50));
    }
    if (fn_827D50B8(*(int *)(param_1 + 0x48)) == 0x3e5 ||
        fn_827D50B8(*(int *)(param_1 + 0x48)) == 0x3e4) {
        fn_827D50D0(*(int *)(param_1 + 0x48));
    }
    for (i = 0; i < *(unsigned int *)(param_1 + 0x1e8); i++) {
        p = *(int **)(param_1 + 0x21c);
        if (p == *(int **)(param_1 + 0x220))
            break;
        for (;;) {
            fn_827D50D0(*fn_827D9C40(&s, *p));
            if (s.b != 0)
                fn_822315A0(s.b);
        }
    }
}
