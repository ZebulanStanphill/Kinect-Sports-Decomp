typedef int (*code)();
extern int fn_82837A40();
extern int fn_82837AE0();

int fn_825B60E0(int param_1, int param_2)
{
    int *puVar1;
    int iVar3;
    unsigned int auStack_20[2];

    iVar3 = (*(code *)(**(int **)(param_1 + 4) + 0x1c))(*(int *)(param_1 + 4));
    puVar1 = *(int **)(*(int *)(iVar3 + 0x10) + 0x48);
    if (fn_82837AE0(*puVar1) != 0) {
        fn_82837A40(*puVar1, auStack_20);
        return param_2 * 0x34 + auStack_20[0];
    }
    return 0;
}
