typedef int (*code)();

int fn_82A5C0E0(int param_1)
{
    int *o = *(int **)(param_1 + 4);
    (*(code *)(*o + 0x1c))(o);
    return 0;
}
