typedef int (*code)();

int fn_82E24C90(int *param_1, int *param_2, int param_3, int param_4)
{
    (*(code *)(*param_1 + 0x1c))(param_1, param_3);
    (*(code *)(*param_1 + 0x14))(param_1, param_4);
    if (param_2 != 0) {
        *param_2 = param_1[4];
    }
    return 0;
}
