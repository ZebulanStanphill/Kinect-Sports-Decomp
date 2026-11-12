extern double lbl_831BB918; /* +infinity */
extern double lbl_831BB920; /* indefinite NaN */
extern double lbl_831BB938; /* -0.0 */
extern int fn_82F653E0(double y);
double fabs(double);

#define HI_82F65450(v) (((unsigned int *)&(v))[0])
#define LO_82F65450(v) (((unsigned int *)&(v))[1])

int fn_82F65450(double x, double y, double *result)
{
    double absx = fabs(x);
    int ret = 0;
    int t;

    if (HI_82F65450(y) == 0x7ff00000 && LO_82F65450(y) == 0) {
        if (absx > 1.0) {
            *result = lbl_831BB918;
        } else if (absx < 1.0) {
            *result = 0.0;
        } else {
            *result = 1.0;
        }
    } else if (HI_82F65450(y) == 0xfff00000 && LO_82F65450(y) == 0) {
        if (absx > 1.0) {
            *result = 0.0;
        } else if (absx < 1.0) {
            *result = lbl_831BB918;
        } else {
            *result = lbl_831BB920;
            ret = 1;
        }
    } else if (HI_82F65450(x) == 0x7ff00000 && LO_82F65450(x) == 0) {
        if (y > 0.0) {
            *result = lbl_831BB918;
        } else if (y < 0.0) {
            *result = 0.0;
        } else {
            *result = 1.0;
        }
    } else if (HI_82F65450(x) == 0xfff00000 && LO_82F65450(x) == 0) {
        t = fn_82F653E0(y);
        if (y > 0.0) {
            *result = t == 1 ? -lbl_831BB918 : lbl_831BB918;
        } else if (y < 0.0) {
            *result = t == 1 ? lbl_831BB938 : 0.0;
        } else {
            *result = 1.0;
        }
    }
    return ret;
}
