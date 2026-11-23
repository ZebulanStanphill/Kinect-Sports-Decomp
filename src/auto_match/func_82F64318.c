typedef struct SinConstants_82F64318 {
    double unused0;      /* 0x00 */
    double reciprocalPi; /* 0x08 */
    double limit;        /* 0x10 */
    unsigned int unused18;
    float positiveSign; /* 0x1c */
    float negativeSign; /* 0x20 */
    unsigned int unused24;
    double piHigh;          /* 0x28 */
    double piLow;           /* 0x30 */
    double coefficients[8]; /* 0x38 */
} SinConstants_82F64318;

extern const SinConstants_82F64318 lbl_831BB298;
extern const double lbl_831BB920;
extern double fabs(double);
extern double __fctid(double);
extern double __fcfid(double);
extern double __fsel(double, double, double);

double sin(double angle)
{
    union {
        double magnitude;
        __int64 bits;
    } input;

    double turns;
    double reduced;
    double square;
    double value;
    double sign;
    const double *c = lbl_831BB298.coefficients;

    input.magnitude = fabs(angle);
    turns = __fcfid(__fctid(lbl_831BB298.reciprocalPi * input.magnitude));
    sign = __fsel(angle, lbl_831BB298.positiveSign, lbl_831BB298.negativeSign);
    reduced = input.magnitude - lbl_831BB298.piHigh * turns;
    reduced -= lbl_831BB298.piLow * turns;
    square = reduced * reduced;
    value =
        ((((((((c[7] * square + c[6]) * square + c[5]) * square + c[4]) * square + c[3]) * square + c[2]) *
               square +
           c[1]) *
              square +
          c[0]) *
             square +
         1.0) *
        reduced;
    if (((__int64)turns & 1) != 0)
        value = -value;
    value *= sign;
    if (input.bits != 0)
        angle = __fsel(input.magnitude - lbl_831BB298.limit, lbl_831BB920, value);
    return angle;
}
