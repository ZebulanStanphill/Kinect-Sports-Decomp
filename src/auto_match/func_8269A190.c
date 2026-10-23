extern int fn_82694610();

int *fn_8269A190(int *param_1, int param_2, unsigned int *param_3)
{
    int iVar1;

    iVar1 = fn_82694610(param_2, (int *)(*param_3 & 0xfffffffc) + 2,
                        *(unsigned int *)(*param_3 & 0xfffffffc) & 0x7fffffff);
    *param_1 = iVar1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    return param_1;
}
