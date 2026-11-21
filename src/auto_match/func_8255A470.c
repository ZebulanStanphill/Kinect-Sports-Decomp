extern double __fctid(double);
extern double __fcfid(double);
double fabs(double x);

/* 1 / (2 * pi) as a float, 0.5 (just below) and 2 * pi as doubles */
#define INV_TWO_PI 0.15915494f
#define HALF 0.49999999
#define TWO_PI 6.2831854820251465

/* Maps an angle to [0, 2 pi). */
static __forceinline float WrapPositive(float angle)
{
    double turns = (float)(angle * INV_TWO_PI);

    return (float)((turns - (float)__fcfid(__fctid(turns - HALF))) * TWO_PI);
}

/* Maps an angle to (-2 pi, 2 pi) by dropping whole turns. */
static __forceinline float WrapTurns(float angle)
{
    double turns = (float)(angle * INV_TWO_PI);

    return (float)((turns - (float)__fcfid(__fctid(turns))) * TWO_PI);
}

/* Clamps angle into the arc from low to high, returning the nearer end when it lies outside. */
float fn_8255A470(float angle, float low, float high)
{
    low = WrapPositive(low);
    high = WrapPositive(high);
    angle = WrapPositive(angle);
    if (high >= low) {
        if (angle < low || angle > high) {
            angle = fabs(WrapTurns(low - angle)) < fabs(WrapTurns(high - angle)) ? low : high;
        }
    } else if (angle > high && angle < low) {
        angle = fabs(WrapTurns(low - angle)) < fabs(WrapTurns(high - angle)) ? low : high;
    }
    return angle;
}
