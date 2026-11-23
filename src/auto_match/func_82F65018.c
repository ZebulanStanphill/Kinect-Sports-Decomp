// Two-argument arctangent: divides the smaller magnitude by the larger, reuses the arctangent's
// pi/6 rotation and rational approximation, then moves the result into the quadrant of (x, y).
typedef struct AtanTable_82F65018 {
    double epsilon;        /* 0x00 */
    double halfPi;         /* 0x08 */
    double pi;             /* 0x10 */
    double tanPi12;        /* 0x18 */
    double sqrt3Minus1;    /* 0x20 */
    double sqrt3;          /* 0x28 */
    double huge;           /* 0x30 */
    double numerator[4];   /* 0x38 */
    double denominator[4]; /* 0x58 */
    double one;            /* 0x78 */
    double offset[4];      /* 0x80: 0, pi/6, pi/2, pi/3 */
    double minimum;        /* 0xA0 */
    float zero;            /* 0xA8 */
    float half;            /* 0xAC */
    float onef;            /* 0xB0 */
    float padB4[3];
} AtanTable_82F65018;

extern AtanTable_82F65018 lbl_831BB380;

double fabs(double x);
extern double __fsel(double test, double positive, double negative);

#define SIGN_BIT(d) (*(unsigned int *)&(d) & 0x80000000)

double fn_82F65018(double y, double x)
{
    AtanTable_82F65018 *t = &lbl_831BB380;
    double num;
    double den;
    double w;
    double r;
    int index;

    if (x == t->zero) {
        if (y == t->zero) {
            if (SIGN_BIT(x) == 0) {
                return y;
            }
            if (SIGN_BIT(y) != 0) {
                return -t->pi;
            }
            return t->pi;
        }
        r = t->halfPi;
    } else {
        double ax = fabs(x);

        index = 0;
        num = fabs(y);
        den = ax;
        if (num > den) {
            den = num;
            index = 2;
            num = ax;
        }
        num = num / den;
        if (num > t->tanPi12) {
            index++;
            num = (t->sqrt3 * num - t->onef) / (t->sqrt3 + num);
        }
        w = num * num;
        r = (((t->numerator[3] * w + t->numerator[2]) * w + t->numerator[1]) * w + t->numerator[0]) * w *
                num /
                ((((w + t->denominator[3]) * w + t->denominator[2]) * w + t->denominator[1]) * w +
                 t->denominator[0]) +
            num;
        if (index > 1) {
            r = -r;
        }
        r = t->offset[index] + r;
    }
    r = __fsel(x, r, t->pi - r);
    if (SIGN_BIT(y) != 0) {
        return -r;
    }
    return r;
}
