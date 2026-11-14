int fn_82F6DFD0(double x)
{
    unsigned short e = *(unsigned short *)&x & 0x7ff8;

    if ((e == 0x7ff0 && ((*(unsigned int *)&x & 0x7ffff) != 0 || ((unsigned int *)&x)[1] != 0)) || e == 0x7ff8)
        return 1;
    return 0;
}
