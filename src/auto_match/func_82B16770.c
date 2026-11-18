extern double fn_82F6FC80(double x, double *intpart); /* modf */
extern double fn_82F6DF80(double x);                  /* _chgsign */
extern double fn_82B16720(double x);

extern const double lbl_82005710; /* 0.0 */

/* floor() built from modf: negative non-integers round down. */
double fn_82B16770(double x)
{
    double ipart;
    double result;

    fn_82F6FC80(x, &ipart);
    result = ipart;
    if (x < lbl_82005710 && x != ipart) {
        result = fn_82B16720(fn_82F6DF80(1.0) + ipart);
    }
    return result;
}
