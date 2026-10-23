extern int fn_8294D308(int p);
extern int fn_82959138(int p, int a, int b, int c, int d, int e, int f);

void fn_829597C8(int param_1, int param_2)
{
    *(int *)(param_1 + 0x160) = 0;
    if (fn_82959138(param_1, 0x80000, 0xe0000, *(int *)(*(int *)(param_1 + 0x104) + 8),
                    0x80000, 0, param_2) >= 0) {
        fn_8294D308(param_1);
    }
}
