typedef int (*code)();

int fn_82EE8390(int param_1)
{
    int *o = *(int **)(param_1 + 0xa0);
    (*(code *)(*o + 0x28))(o);
    return 0;
}
