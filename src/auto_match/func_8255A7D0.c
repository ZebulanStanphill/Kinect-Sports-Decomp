extern double __fctid(double);
extern double __fcfid(double);
extern const double lbl_821954B0[0x145];

/* the pooled constants 1 / (2 * pi) (a float at +0xe0) and 2 * pi (a double at +0xf0) */
#define INV_TWO_PI (((const float *)lbl_821954B0)[0x38])
#define TWO_PI (lbl_821954B0[0x1e])

static __forceinline float WrapAngle(float angle)
{
    double turns = (float)(angle * INV_TWO_PI);

    return (float)((turns - (float)__fcfid(__fctid(turns))) * TWO_PI);
}

float fn_8255A7D0(float a, float b, float c)
{
    float toC = WrapAngle(b - c);
    float toA = WrapAngle(b - a);

    float result = a;

    if (toC > 0.0f) {
        if (toA < 0.0f) {
            result = b;
        } else if (toA > toC) {
            result = c;
        }
    } else if (toA > 0.0f) {
        result = b;
    } else if (toA < toC) {
        result = c;
    }
    return result;
}
