int fn_82E83330(char *p)
{
    int r = 0;
    if (*(int *)(p + 0x4) == 8 && *(int *)(p + 0x6d54) != 0 && *(int *)(p + 0x7b38) != 0)
        r = 1;
    return r;
}
