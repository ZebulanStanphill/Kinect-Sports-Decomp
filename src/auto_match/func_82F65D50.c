// Arcsine: a rational approximation in x * x up to |x| = 0.5; above it the identity
// asin(x) = pi/2 - 2 * asin(sqrt((1 - |x|) / 2)) through the offset table.
typedef struct AsinTable_82F65D50 {
    float zero;            /* 0x00 */
    float one;             /* 0x04 */
    float two;             /* 0x08 */
    float half;            /* 0x0C */
    double offset[4];      /* 0x10: 0, pi/2, pi, pi/2 */
    double numerator[5];   /* 0x30 */
    double denominator[5]; /* 0x58 */
} AsinTable_82F65D50;

extern AsinTable_82F65D50 lbl_831BB450;

double fabs(double x);
double sqrt(double x);
extern double __fsel(double test, double positive, double negative);

double fn_82F65D50(double x)
{
    AsinTable_82F65D50 *t = &lbl_831BB450;
    double y;
    double w;
    double r;
    int index;

    y = fabs(x);
    if (y > t->half) {
        index = 1;
        w = (t->one - y) * t->half;
        y = -(sqrt(w) * t->two);
    } else {
        index = 0;
        w = y * y;
        if (x == t->zero) {
            return x;
        }
    }
    r = ((((t->numerator[4] * w + t->numerator[3]) * w + t->numerator[2]) * w + t->numerator[1]) * w +
         t->numerator[0]) *
            w * y /
            (((((w + t->denominator[4]) * w + t->denominator[3]) * w + t->denominator[2]) * w +
              t->denominator[1]) *
                 w +
             t->denominator[0]) +
        y;
    r = t->offset[index] + r;
    return __fsel(x, r, -r);
}
