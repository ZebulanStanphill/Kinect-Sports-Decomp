unsigned char fn_826BCFF8(unsigned int c)
{
    if (c <= 0x7f)
        return 1;
    if (c <= 0x7ff)
        return 2;
    if (c <= 0xffff)
        return 3;
    if (c <= 0x1fffff)
        return 4;
    if (c <= 0x3ffffff)
        return 5;
    if (c <= 0x7fffffff)
        return 6;
    return 0;
}
