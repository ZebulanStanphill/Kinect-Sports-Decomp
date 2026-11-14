#define CLAMP_MAX(a, b) ((a) < (b) ? (b) : (a))
#define CLAMP_MIN(a, b) ((a) < (b) ? (a) : (b))

extern int fn_829CFE50(int kind, int *mode, unsigned int a, int b, unsigned short rate, int *out1, int *out2);

int fn_829D3900(int kind, int *mode, unsigned int a, int b, unsigned short rate, int *out1, int *out2)
{
    rate = CLAMP_MIN(CLAMP_MAX(rate, 0x1900), 0x7d07);
    return fn_829CFE50(kind, mode, a, b, rate, out1, out2);
}
