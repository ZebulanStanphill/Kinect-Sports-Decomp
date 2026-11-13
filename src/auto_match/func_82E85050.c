int fn_82E85050(char *p)
{
    int r = 0;
    if (*(int *)(p + 0x7b38) != 0 && *(int *)(p + 0xaf4) == 1 && *(int *)(p + 0xaf8) == 0)
        r = 1;
    return r;
}
