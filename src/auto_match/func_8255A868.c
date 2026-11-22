extern double __fctid(double);
extern double __fcfid(double);

/* 1 / (2 * pi) as a float and 2 * pi as a double */
#define INV_TWO_PI 0.15915494f
#define TWO_PI 6.2831854820251465

/* Maps an angle to (-2 pi, 2 pi) by dropping whole turns. */
static __forceinline float WrapTurns(float angle)
{
    double turns = (float)(angle * INV_TWO_PI);

    return (float)((turns - (float)__fcfid(__fctid(turns))) * TWO_PI);
}

/* Per-axis angle difference a - b, wrapped by whole turns. */
void fn_8255A868(float *out, float *a, float *b)
{
    out[0] = WrapTurns(a[0] - b[0]);
    out[1] = WrapTurns(a[1] - b[1]);
    out[2] = WrapTurns(a[2] - b[2]);
}
