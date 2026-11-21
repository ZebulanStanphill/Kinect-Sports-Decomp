extern double lbl_831BB310[14];
extern double fn_82F788F0(double value);
extern int fn_82F71810(double value);

double fn_82F64B20(double x, int *exponent)
{
    double n;
    double r;
    double z;
    double p;
    double q;
    double result;

    n = fn_82F788F0(lbl_831BB310[4] * x);
    r = x - lbl_831BB310[5] * n;
    r = r - lbl_831BB310[6] * n;
    z = r * r;
    p = ((lbl_831BB310[9] * z + lbl_831BB310[8]) * z + lbl_831BB310[7]) * r;
    q = (lbl_831BB310[12] * z + lbl_831BB310[11]) * z + lbl_831BB310[10];
    result = p / (q - p) + 0.5;
    *exponent = fn_82F71810(result) + (int)n + 1;
    return result;
}
