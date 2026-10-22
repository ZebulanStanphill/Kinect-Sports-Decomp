typedef struct { unsigned char type; int obj; unsigned char a, b, c; } Msg;
extern void fn_82D80C48(int, void *);
extern void fn_82D929B0(int);
extern void fn_82DACE50(int);
extern void fn_82DADA58(void *, int);

void fn_82D8B6C8(int param_1, int a, int b, int c)
{
    Msg m;
    int q = *(int *)(param_1 + 8);

    if (q != 0 && *(int *)(q + 0x94) != 0) {
        m.type = 4; m.obj = param_1; m.a = a; m.b = b; m.c = c;
        fn_82D80C48(q, &m);
        return;
    }
    fn_82D929B0(param_1);
    if (*(void **)(param_1 + 8) != 0) {
        fn_82DADA58(*(void **)(param_1 + 8), param_1);
    }
    fn_82DACE50(param_1);
}
