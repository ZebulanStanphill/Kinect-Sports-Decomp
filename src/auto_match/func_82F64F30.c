// Arctangent: reduces |x| above 1 to 1/|x| and above tan(pi/12) by the pi/6 rotation, then a
// rational approximation; the offset table adds the reductions back.
typedef struct AtanTable_82F64F30 {
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
} AtanTable_82F64F30;

extern AtanTable_82F64F30 lbl_831BB380;

double fabs(double x);

double fn_82F64F30(double x)
{
    AtanTable_82F64F30 *t = &lbl_831BB380;

    union {
        double d;
        __int64 bits;
    } a;

    double y;
    double w;
    double r;
    int index;

    a.d = fabs(x);
    y = a.d;
    if (y > t->onef) {
        if (y > t->huge) {
            r = t->halfPi;
            goto done;
        }
        index = 2;
        y = t->onef / y;
    } else {
        index = 0;
    }
    if (y > t->tanPi12) {
        index++;
        y = (t->sqrt3 * y - t->onef) / (t->sqrt3 + y);
    }
    w = y * y;
    r = (((t->numerator[3] * w + t->numerator[2]) * w + t->numerator[1]) * w + t->numerator[0]) * w * y /
            ((((w + t->denominator[3]) * w + t->denominator[2]) * w + t->denominator[1]) * w +
             t->denominator[0]) +
        y;
    if (index > 1) {
        r = -r;
    }
    r = t->offset[index] + r;
done:
    if (a.bits == 0) {
        return x;
    }
    return x >= 0.0 ? r : -r;
}
