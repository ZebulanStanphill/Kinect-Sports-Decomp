typedef int (*code)();

int *fn_826890A0(int *param_1, int *param_2)
{
    int uVar1;
    int uVar2;

    uVar1 = (*(code *)(*param_2 + 8))(param_2);
    uVar2 = (*(code *)(*param_2 + 4))(param_2);
    param_1[2] = uVar2;
    param_1[3] = uVar1;
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
}
