extern double sqrt(double);
extern unsigned char fn_8287C2E8(unsigned __int64 value);

static __forceinline unsigned char isSquare(unsigned __int64 value)
{
    unsigned __int64 root = (unsigned __int64)(float)sqrt((double)value);
    return root * root == value;
}

unsigned char fn_8287C340(unsigned int n)
{
    unsigned __int64 x = n;
    unsigned __int64 t, lo, hi;
    if (n == 0)
        return 0;
    t = x * x * 5;
    lo = t - 4;
    hi = t + 4;
    return isSquare(lo) || fn_8287C2E8(hi);
}
