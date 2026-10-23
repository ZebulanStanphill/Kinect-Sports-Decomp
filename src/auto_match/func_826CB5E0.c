extern int fn_826C59F8();
extern int fn_826C8590();
extern int fn_826CACF8();
extern int fn_82758B68();

void fn_826CB5E0(int param_1)
{
    int iVar2;
    int r;

    iVar2 = fn_826C59F8();
    if (iVar2 != 0) {
        fn_826C8590(iVar2, 1);
        r = fn_82758B68(*(int *)(iVar2 + 0x1b8));
        if (r != 0) {
            fn_826CACF8(param_1, r);
        }
    }
}
