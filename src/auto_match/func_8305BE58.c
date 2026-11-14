extern const double lbl_82005710;

double fn_8305BE58(double x)
{
    double r;
    if (x == lbl_82005710)
        return 1.0;
    r = 1.0 / x;
    if (r <= 1.0)
        return r;
    return 1.0;
}
