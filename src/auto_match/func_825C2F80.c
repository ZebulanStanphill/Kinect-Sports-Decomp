extern double __fctid(double);
extern double __fcfid(double);

/* the random number generator's state */
extern unsigned int lbl_83265A28;

/* Returns a pseudo-random number in [0, 1). */
static __forceinline float RandomUnit(void)
{
    union {
        unsigned int bits;
        float value;
    } random;

    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    random.bits = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
    return random.value - 1.0f;
}

/* Maps an angle to (-2 pi, 2 pi) by dropping whole turns. */
static __forceinline float WrapTurns(float angle)
{
    double turns = (float)(angle * 0.15915494f);

    return (float)((turns - (float)__fcfid(__fctid(turns))) * 6.2831854820251465);
}

/* Returns a random angle from from up to to (through a whole turn when to is smaller). */
float fn_825C2F80(float from, float to)
{
    float start;

    if (from > to) {
        start = from - 6.2831855f;
        return WrapTurns((to - start) * RandomUnit() + start);
    }
    if (from < to) {
        return (to - from) * RandomUnit() + from;
    }
    return from;
}
