extern double __fctid(double);
extern double __fcfid(double);
double fabs(double x);

/* 0, pi / 2, pi and -pi / 2: the headings of the four directions */
extern const float lbl_8218E2E8[8];
extern float fn_8261DBA8(void *self);

/* Maps an angle to (-2 pi, 2 pi) by dropping whole turns. */
static __forceinline float WrapTurns(float angle)
{
    double turns = (float)(angle * 0.15915494f);

    return (float)((turns - (float)__fcfid(__fctid(turns))) * 6.2831854820251465);
}

/* Returns which of the four directions is nearest to the heading of self turned by angle. */
int fn_825DB4D0(void *self, float angle)
{
    int best = 0;
    float heading = fn_8261DBA8(self);
    int i;

    for (i = 1; i < 4; i++) {
        if (fabs(WrapTurns(lbl_8218E2E8[i] + angle - heading)) <
            fabs(WrapTurns(lbl_8218E2E8[best] + angle - heading))) {
            best = i;
        }
    }
    return best;
}
