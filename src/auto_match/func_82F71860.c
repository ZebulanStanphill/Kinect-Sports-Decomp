/* Classifies a double: 1 +infinity, 2 -infinity, 3 quiet NaN, 4 signalling NaN, 0 otherwise. */
int fn_82F71860(double x)
{
    if (((unsigned int *)&x)[0] == 0x7ff00000 && ((unsigned int *)&x)[1] == 0)
        return 1;
    if (((unsigned int *)&x)[0] == 0xfff00000 && ((unsigned int *)&x)[1] == 0)
        return 2;
    if ((*(unsigned short *)&x & 0x7ff8) == 0x7ff8)
        return 3;
    if ((*(unsigned short *)&x & 0x7ff8) == 0x7ff0
        && ((((unsigned int *)&x)[0] & 0x7ffff) != 0 || ((unsigned int *)&x)[1] != 0))
        return 4;
    return 0;
}
