extern double __fctid(double);
extern double __fcfid(double);

typedef struct Angles_8255A970 {
    float x;
    float y;
    float z;
} Angles_8255A970;

/* Maps an angle to [0, 2 pi). */
static __forceinline float WrapPositive(float angle)
{
    double turns = (float)(angle * 0.15915494f);

    return (float)((turns - (float)__fcfid(__fctid(turns - 0.49999999))) * 6.2831854820251465);
}

/* Maps an angle to (-2 pi, 2 pi) by dropping whole turns. */
static __forceinline float WrapTurns(float angle)
{
    double turns = (float)(angle * 0.15915494f);

    return (float)((turns - (float)__fcfid(__fctid(turns))) * 6.2831854820251465);
}

/* Interpolates each angle from its value in from towards to by the fraction t. */
void fn_8255A970(const Angles_8255A970 *from, const Angles_8255A970 *to, float t, Angles_8255A970 *out)
{
    float dx = WrapTurns(to->x - from->x);
    float dy = WrapTurns(to->y - from->y);
    float dz = WrapTurns(to->z - from->z);
    float x = WrapPositive(dx * t + from->x);
    float y = WrapPositive(dy * t + from->y);
    float z = WrapPositive(dz * t + from->z);

    out->x = x;
    out->y = y;
    out->z = z;
}
