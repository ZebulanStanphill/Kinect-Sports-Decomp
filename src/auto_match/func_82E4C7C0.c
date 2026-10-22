extern int fn_82E91590(int, int **, int);
extern int fn_82E92160(int, int);
extern void fn_82E92D78(int);

int fn_82E4C7C0(int param_1)
{
    int n;
    int *p;
    int obj = *(int *)(param_1 + 0x230);

    n = *(int *)(obj + 0x10);
    if (n != 0 && n - 1 >= 0) {
        if (fn_82E91590(obj, &p, 0) != 0 && p != 0 &&
            fn_82E92160(*(int *)(param_1 + 0x234), *p) == 0) {
            fn_82E92D78(*(int *)(param_1 + 0x234));
            return 0;
        }
    }
    return -100;
}
