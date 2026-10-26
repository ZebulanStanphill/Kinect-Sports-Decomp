int fn_82FA9410(char *p, int x)
{
    if (*(int *)(p + 0xc) < 0)
        return *(int *)(p + 0xc) + x;
    return x;
}
