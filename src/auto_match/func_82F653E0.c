extern double __fctid(double);
extern double __fcfid(double);

int fn_82F653E0(double x)
{
    double h;
    if ((*(unsigned short *)&x & 0x7ff0) == 0 &&
        ((((unsigned int *)&x)[0] & 0xfffff) != 0 || ((unsigned int *)&x)[1] != 0))
        return 0;
    if (__fcfid(__fctid(x)) == x) {
        h = x * 0.5;
        if (__fcfid(__fctid(h)) == h)
            return 2;
        return 1;
    }
    return 0;
}
