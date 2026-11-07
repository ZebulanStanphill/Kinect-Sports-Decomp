typedef unsigned char U8;
typedef unsigned int U32;
typedef unsigned __int64 U64;

extern int fn_826957D0(int obj, int arg);
extern double fn_826972E0(int a, int b);
extern int fn_826959C8(U8 *p);

static __forceinline U8 IsNaN_826A6E48(double d)
{
    U64 b = *(U64 *)&d;
    return (b & 0x7ff0000000000000ULL) == 0x7ff0000000000000ULL &&
           (b & 0x000fffffffffffffULL) != 0;
}

static __forceinline U8 IsNegInf_826A6E48(double d)
{
    return *(U64 *)&d == 0xfff0000000000000ULL;
}

static __forceinline U8 IsPosInf_826A6E48(double d)
{
    return *(U64 *)&d == 0x7ff0000000000000ULL;
}

void fn_826A6E48(int param_1)
{
    U8 *out;
    double d;
    int arg;

    if (*(int *)(param_1 + 0x1c) >= 1) {
        arg = *(int *)(param_1 + 0x18);
        d = fn_826972E0(fn_826957D0(param_1, 0), arg);
        if (!IsNaN_826A6E48(d) && !IsNegInf_826A6E48(d) && !IsPosInf_826A6E48(d)) {
            out = *(U8 **)(param_1 + 4);
            fn_826959C8(out);
            out[4] = 1;
            out[0] = 2;
            return;
        }
    }
    out = *(U8 **)(param_1 + 4);
    fn_826959C8(out);
    out[4] = 0;
    out[0] = 2;
}
