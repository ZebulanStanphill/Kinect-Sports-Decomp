extern int fn_826957D0(int obj, int arg);
extern double fn_826972E0(int a, int b);
extern int fn_826959C8(unsigned char *p);

static __forceinline unsigned char IsNaN_826A6E48(double d)
{
    unsigned __int64 b = *(unsigned __int64 *)&d;
    return (b & 0x7ff0000000000000ULL) == 0x7ff0000000000000ULL &&
           (b & 0x000fffffffffffffULL) != 0;
}

static __forceinline unsigned char IsNegInf_826A6E48(double d)
{
    return *(unsigned __int64 *)&d == 0xfff0000000000000ULL;
}

static __forceinline unsigned char IsPosInf_826A6E48(double d)
{
    return *(unsigned __int64 *)&d == 0x7ff0000000000000ULL;
}

void fn_826A6E48(int param_1)
{
    unsigned char *out;
    double d;
    int arg;

    if (*(int *)(param_1 + 0x1c) >= 1) {
        arg = *(int *)(param_1 + 0x18);
        d = fn_826972E0(fn_826957D0(param_1, 0), arg);
        if (!IsNaN_826A6E48(d) && !IsNegInf_826A6E48(d) && !IsPosInf_826A6E48(d)) {
            out = *(unsigned char **)(param_1 + 4);
            fn_826959C8(out);
            out[4] = 1;
            out[0] = 2;
            return;
        }
    }
    out = *(unsigned char **)(param_1 + 4);
    fn_826959C8(out);
    out[4] = 0;
    out[0] = 2;
}
