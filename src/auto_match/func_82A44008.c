extern void fn_82A403E8(int a, void *b);
extern void *fn_82A40AD8(void *q);
extern void fn_82A4F4E0(void *p);
extern void fn_82A518E0(int a);

typedef void (*vfn)(int self, int arg);

void fn_82A44008(int param_1)
{
    void *p;

    if (*(int *)(param_1 + 4) != 1) {
        *(int *)(*(int *)(param_1 + 0x30) + 0x28) -= *(int *)(param_1 + 0x28);
    }
    if (*(int *)(param_1 + 4) == 0) {
        (*(vfn *)(*(int *)(param_1 - 4) + 0x78))(param_1 - 4, 1);
    }
    fn_82A518E0(param_1);
    while ((p = fn_82A40AD8((void *)(param_1 + 0xe0))) != 0) {
        if (p != 0)
            fn_82A4F4E0(p);
    }
    if (*(void **)(param_1 + 0x8c) != 0) {
        fn_82A403E8(*(int *)(param_1 + 0x30), *(void **)(param_1 + 0x8c));
        *(void **)(param_1 + 0x8c) = 0;
    }
}
